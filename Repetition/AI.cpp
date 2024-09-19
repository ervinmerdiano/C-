#include <stdio.h>
#include <stdbool.h>

int main(){
    int a; 
    long int len;
    scanf("%d", &a);

    for(int cases = 0; cases < a; cases++){
        int total = 0;
        scanf("%ld", &len);
        int arr[len];

        for(int i = 0; i < len; i++){
            scanf("%d", &arr[i]);
            total += arr[i];
        }
        int half_total = 0;
        bool possible = false;

        for(int i = 0; i < len; i++){
            half_total += arr[i];
            if(half_total*2 == total){
                possible = true;
                break;
            }
        }
        printf("Case #%d: ", cases+1);
        printf("%s\n", (possible? "Yes" : "No"));
    }
    return 0;
}
