#include<stdio.h>

int main(){
	
	long int A;
	scanf("%ld", &A);
	if(A%2 == 0){
		printf("EVEN\n");
	}else{
		printf("ODD\n");
	}
	
	return 0;
}
