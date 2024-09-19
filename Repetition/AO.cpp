#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    int b,c;
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        scanf("%d",&c);getchar();
        scanf("%[^\n]",&a);getchar();
        printf("Case #%d: ",i);
        for(int i=0;i<c;i++){
            if(((65<=a[i])&&(a[i]<=90)) || ((97<=a[i])&&(a[i]<=122))){
                printf("%c",a[i]);}
                }
        puts("");
    }
    return 0;
}
