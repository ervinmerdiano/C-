#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);getchar();
    
    for(int i=1;i<=a;i++){
        scanf("%d",&b);getchar();
        printf("Case #%d:\n",i);
        
        for(int j=1;j<=b;j++){
            for(int k=1;k<=b;k++){
                printf("%c",((b-j)<k)?((k%2!=(j%2==0))?'*':'#'):' ');
            }
            puts("");
        }
    }
    return 0;
}
