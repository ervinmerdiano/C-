#include <stdio.h>

int main(){
    long long int a,b;
    long long int answer = 0;
    
    scanf("%lld",&a);getchar();
    
    while(a--){
        scanf("%lld",&b);getchar();
        answer += b;
    }
    printf("%lld\n",answer);
    
    return 0;
}
