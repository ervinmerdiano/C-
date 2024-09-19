#include <stdio.h>

int main(){
    long long int a,b,c,d;
    
    scanf("%lld",&a);getchar();
    
    for(int i=1;i<=a;i++){
        c = 0;
        scanf("%lld",&b);getchar();
        
        for(int j=1;c<b;j++){
            c += j;
            if(c>=b)d=j;
        }
        printf("Case #%d: %lld\n",i,d);

    }
    
    return 0;
}
