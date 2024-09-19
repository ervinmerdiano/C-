#include <stdio.h>
int main(){
    int t,a,b,c,d;
    scanf("%d",&t);getchar();
    
    for(int i=1;i<=t;i++){
        c = 0;
        
        scanf("%d %d",&a,&b);getchar();
        
		c += a;
        
        while(a>=b){
            d = a/b;
            c += d;
            a %= b;
            a += d;
        }
        printf("Case #%d: %d\n",i,c);
    }
    
    return 0;
}
