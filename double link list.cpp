#include<stdio.h>
#include<stdlib.h>

struct data
{
	int angka;
	struct data*next, *prev;
	
} *head, *tail, *curr, *temp;

void pushdepan(int x)
{
	curr=(struct data*) malloc(sizeof(struct data));
	curr->angka=x;
	if(head=NULL){
			
	head = tail = curr;
	head -> prev = NULL;
	tail -> next = NULL;
	
}
	else
{
	curr->next=head;
	head=curr;
	head->prev=NULL;
}
}

void pushbelakang(int x){
	curr=(struct data*) malloc(sizeof(struct data));
	curr->angka=x;
	if(head=NULL)
	{
	head=tail=curr;
	head->prev=NULL;
	tail->next=NULL;
	}
	else
	{
	tail->next=curr;
	tail=curr;
	tail->next=NULL;
	}
}

void push(int x)
{
	curr=(struct data*) malloc(sizeof(struct data));
	curr->angka=x;
	if(head==NULL)
	{
		head=  tail = curr;
		head->prev = NULL;
		tail->next = NULL;
		
	}
	else if(curr->angka<head->angka) pushdepan(x); // lakukan push depan
	else if(curr->angka>tail->angka) pushbelakang(x); // lakukan push belakang
	else // lakukan push tengah
	{
		temp=head;
		while(temp->next->angka < curr -> angka) temp=temp->next;
		
		curr->next = temp -> next;
		temp -> next -> prev = curr;
		temp-> next = curr;
		curr -> prev = temp;
		
	}
}

void cetak()
{
	if(head!=NULL)
	{
	curr=head;
	
	while(curr!=NULL){
		printf("%d ", curr->angka);
		curr=curr->next;
	}
		printf("\n");
	}
}
	
	
	
void popdepan()
{
	if(head != NULL)
	{
		curr=head;
		head=head->next;
		free(curr);
		head->prev = NULL;
	}
	
}
	
void popbelakang()
{
	if(head != NULL)
	{
		curr=tail;
		tail=tail->prev;
		free(curr);
		tail->next = NULL;
	}
	
}
	
void poptengah(int x)
{
	if(head->angka == x) popdepan();
	
	else if(tail -> angka == x) popbelakang();
	
	else
	{
		temp = head;
		while(temp->next->angka != x)temp = temp -> next;
		curr=temp->next;
		temp->next=curr->next;
		curr->next->prev=temp;
		free(curr);
		
	}
	
}
	
	int main(){
		push(10);
		push(15);
		push(12);
		cetak();
		poptengah(15);
		poptengah(1);
		cetak();
		
		return 0;
	}
