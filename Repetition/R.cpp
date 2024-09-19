#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long long int a,b,c;
    scanf("%lld",&a);getchar();
    
    for(int i=1;i<=a;i++){
        
        scanf("%lld",&b);getchar();
        long long int* nums=(long long int*)calloc(b,sizeof(long long int));
        
        for(int j=0;j<b;j++){
            scanf("%lld",&nums[j]);getchar();
        }
        c = abs(nums[0]-nums[1]);
        
		for(int j=0;j<(b-1);j++){
            c =(c>abs(nums[j]-nums[j+1]))?abs(nums[j]-nums[j+1]):c;
        }
        printf("Case #%d: %lld\n",i,c);

    }
}
