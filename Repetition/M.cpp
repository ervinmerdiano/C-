#include <stdio.h>

int main(){
    int a,b;
    long long int c, d, total;
    
    scanf("%d",&a);getchar();
    
    for(int i=1;i<=a;i++){
        total = 0;
        scanf("%d %lld",&b,&c);
        
        while(b--){
            scanf("%lld",&d);getchar();
            total += d;
        }
        printf("Case #%d: %s\n",i,(c >= total)?"No worries":"Wash dishes");
    }
}
