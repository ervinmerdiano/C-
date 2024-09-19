#include <stdio.h>

int main()
{   
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);
    if(c-a>=0 && b-c >= 0 && c-a == b-c){
    	printf("%d\n", c-a);
	}else{
		printf("-1\n");
	
    }
    return 0;
}
