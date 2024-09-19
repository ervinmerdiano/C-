#include <stdio.h>
int main(){
    int tc,a,b,res,temp;
    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){
        res=0;
        scanf("%d %d",&a,&b);getchar();
        res+=a;
        while(a>=b){
            temp=a/b;
            res+=temp;
            a%=b;
            a+=temp;
        }
        printf("Case #%d: %d\n",i,res);
    }
}
