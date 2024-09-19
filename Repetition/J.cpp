#include <stdio.h>

int main(){
    int a;
    long long int b,c;
    long long int total;
    
    scanf("%d",&a);getchar();
    
    for(int i=1;i<=a;i++){
        total=0;
        scanf("%lld",&b);getchar();
        
        while(b--){
            scanf("%lld",&c);getchar();
            total+=c;
        }
        printf("Case #%d: %lld\n",i,total);
    }
    
    return 0;
}
