#include <stdio.h>
#include <math.h>

#define MIN(x,y) (((x)<(y))?(x):(y))

long long int minPageFlip(long long int N, long long int X){
    long long int flipFront = ceil((double)(X-1)/2);
    N-=(N%2==1)?1:0;
   
    long long int flipBack = ceil((double)(N-X)/2);
    
	return MIN(flipFront,flipBack);
}

int main(){
    long long int N, X,a;
    
	scanf("%lld", &a);getchar();
	
    	for(int i=1;i<=a;i++){
    	scanf("%lld %lld", &N,&X);getchar();
    	
		long long int minFlip = minPageFlip(N, X);
    	printf("Case #%lld: %lld\n",i,minFlip);}


    return 0;
}
