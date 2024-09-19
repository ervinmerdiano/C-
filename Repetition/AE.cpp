#include <stdio.h>

int main(){
    int a;
    double b,c;
    scanf("%d",&a);getchar();
    for(int i=1;i<=a;i++){
        scanf("%lf %lf",&b,&c);getchar();
        printf("Case #%d: %.2lf\n",i,(b*b*2*3.14)+(2*3.14*b*c));
    }
    
    
    return 0;
}
