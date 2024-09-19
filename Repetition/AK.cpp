#include <stdio.h>

int main(){
    int a,b,c = 0;
    scanf("%d",&a);getchar();
    
    for(int i=1;i<=a;i++){
        scanf("%d",&b);getchar();
        
        if(c >= b){
            printf("%d ",c);
            c = b;
        }
        else c = b;
        if(i==a)printf("%d\n",b);
    }
    return 0;
}
