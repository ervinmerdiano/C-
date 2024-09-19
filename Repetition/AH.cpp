#include <stdio.h>

int main(){
    int a;
    long long int b,c;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        c = 0;
        scanf("%lld",&b);
        while(b){
            c+=1;
            b/=10;
        }
        printf("Case #%d: %lld\n",i,c);
    }
    return 0;
}
