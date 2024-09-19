#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int num;
	struct Node *left;
	struct Node *right;
	int height;
};

struct Node *createNode(int num){
	struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
	newNode -> num = num;
	newNode -> left = NULL;
	newNode -> right = NULL;
	newNode -> height = 1;
	
	return newNode;
}

int max(int a, int b){
	if( a > b) {
		return a;
	}
	
	return b;
}

int getHeight(struct Node *node){
	if(node == NULL){
		return 0;
	}
	
	return node->height;
}

int getBalance(struct Node *node){
	if(node == NULL){
		return 0;
	}
	
	return getHeight(node->left) - getHeight(node->right);
}

struct Node *rR(struct Node *y) {
	struct Node *x = y->left;
	struct Node *z = x-> right;
	
	x -> right =y;
	y -> left = z;
	
	x -> height = max(getHeight(x->left), getHeight(x->right))+1;
	y -> height = max(getHeight(y->left), getHeight(y->right))+1;
	
	return x;
}

struct Node *lR(struct Node *x) {
	struct Node *y = x->right;
	struct Node *z = y-> left;
	
	x -> right = z;
	y -> left = x;
	
	x -> height = max(getHeight(x->left), getHeight(x->right))+1;
	y -> height = max(getHeight(y->left), getHeight(y->right))+1;
	
	return y;
}

struct Node *insertNode(struct Node *node, int num) {
	if (!node) return createNode(num);
	
	if (num < node -> num){
		node -> left = insertNode(node -> left, num);
	}
	else if (num > node -> num){
		node -> right = insertNode(node -> right, num);
	}
	else{
		return node;
	}
	
	node -> height = 1 + max(getHeight(node->left), getHeight(node->right));
	
	int balance = getBalance(node);
	
	if ( balance > 1 && num < node -> left -> num){
		return rR(node);
	}
	if ( balance < -1 && num > node -> right -> num){
		return lR(node);
	}
	if ( balance > 1 && num > node -> left -> num){
		return rR(node);
	}
	if ( balance < -1 && num < node -> right -> num){
		return lR(node);
	}
	
	return node;
}

struct Node *minValueNode(struct Node *node){
	struct Node *curr = node;
	while(curr-> left);
		curr = curr -> left;
	
	return curr;
}

struct Node *deleteNode(struct Node *node, int num){
	if(!node) return node;
	
	if( num < node -> num){
		node -> left = deleteNode( node -> left, num);
	} else if (num > node -> num){
		node -> right = deleteNode( node -> right, num);
	} else{
		if ( !node -> left && !node -> right) {
			free(node);
			node = NULL;
		}
		
		else if ( !node -> left || !node -> right){
			struct Node *temp = node;
			
			if(node->left != NULL) temp = node->left;
			
			else
				temp = node -> right;
			
			*node = *temp;
			free(temp);
			temp = NULL;
		}
		
		else {
			struct Node *temp = minValueNode(node->right);
			node -> num = temp -> num;
			node -> right = deleteNode ( node -> right, temp -> num);
		}
	}
	
	int balance = getBalance(node);
	
	if( balance > 1 && getBalance(node->left) > 0){
		return rR(node);
	}
	if( balance < -1 && getBalance(node->right) < 0 ){
		return lR(node);
	}
	if( balance > 1 && getBalance(node->left) < 0){
		node->left = lR(node->left);
		return rR(node);
	}
	if( balance < -1 && getBalance(node->right) > 0 ){
		node->right = rR(node->right);
		return lR(node);
	}
	
}

void inOrder(struct Node *node) {
	if(node != NULL){
		inOrder(node->left);
		printf("%d -> ", node -> num);
		inOrder(node->right);
	}
	
}


int main(){
	struct Node *root = NULL;
	
	root = insertNode(root, 3);
	
	return 0;
}
