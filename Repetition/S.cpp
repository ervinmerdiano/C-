#include <stdio.h>

int main(){
    long long int a,b,c,d = 0;
    scanf("%lld %lld",&a,&b);getchar();
    
    while(a--){
        scanf("%lld",&c);getchar();
        d += (b>c)?1:0;
    }
    printf("%lld\n",d);
    
    return 0;
}
