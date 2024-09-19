#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);getchar();
    for(int i=1;i<=a;i++){
        
        printf("Case #%d: ",i);
        
        for(int j=1;j<=6;j++){
            scanf("%d",&b);getchar();
            while(b--){
            switch(j){
                case 1:printf("a");break;
                case 2:printf("s");break;
                case 3:printf("h");break;
                case 4:printf("i");break;
                case 5:printf("a");break;
                case 6:printf("p");break;
            }}
        }
        puts("");
    }
    
    
    return 0;
}
