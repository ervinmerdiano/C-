#include <stdio.h>
int main() {
    int t,n,a,b,c,d,throw_;
    scanf("%d", &t);getchar();
    for(int i=1; i<=t; i++){
        throw_=0;
        
        scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);getchar();
        for(int j=1;j<=n;j++){
            throw_+=((j%a==0) || (j%b==0) || (j%c==0) || (j%d==0))?1:0;
        }
        printf("Case #%d: %d\n",i,throw_);
    }
}
