#include <stdio.h>

int main(){
    int item;
    scanf("%d", &item);
    int arr[item];

    for(int i=0; i<item; i++){
        scanf("%d", &arr[i]);
    }
    int maxCount = 0;
    for(int i=0; i<item; i++){
        int count = 0; 
        for(int j=0; j<item; j++){
            if(arr[j] == arr[i]){
                ++count;
            }
            if(count > maxCount){
                maxCount = count;
            }
        }
    }
    printf("%d\n", maxCount);

    return 0;
}
