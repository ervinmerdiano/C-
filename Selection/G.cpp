#include<stdio.h>

int main(){
    long int a,b,c,d;
    scanf("%ld %ld %ld %ld", &a,&b,&c,&d);

    long int left = a*b;
    long int right = c-d;

    if(left == right){
        printf("True\n");
    } else{
        printf("False\n");
    }

    return 0;
}
