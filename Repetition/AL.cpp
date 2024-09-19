#include <stdio.h>

int main(){
    long long int a,b,c;
	long long int d = 0;
	long long int e=0;
	
    scanf("%lld %lld", &a,&b);getchar();
    
    while(a--){
        scanf("%lld",&c);getchar();
        d =(d<=c)?c:d;
    }
    while(b--){
        scanf("%lld",&c);getchar();
        e =(e<=c)?c:e;
    }
    puts((d>e)?"The dark secret was true":"Secret debunked");
    
    return 0;
}   
