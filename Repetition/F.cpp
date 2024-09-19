#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            printf("#");
        }
        puts("");
    }
    puts("");
    
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            printf("%c",(i%b==0)?'#':'.');
        }
        puts("");
    }
    puts("");
    
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            printf("%c",(j%b==0)?'#':'.');
        }
        puts("");
    }
    
    
    return 0;
}
