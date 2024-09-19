#include <stdio.h>

int under;

int count_3_or_more_on_bits(long long int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int xor_result = arr[i] ^ arr[j];
            int on_bits_count = 0;

            while (xor_result > 0) {
                if (xor_result & 1) {
                    on_bits_count++;
                }
                xor_result >>= 1;
            }

            if (on_bits_count >= 3) {
                count++;
            }else under++;
        }
    }

    return count;
}

int main() {
    int a,b;
    long long int arr[101];
    
    scanf("%d",&a);getchar();
    
    for(int i=1;i<=a;i++){
        under=0;
        scanf("%d",&b);getchar();
        
        for(int j=0;j<b;j++){
            scanf("%lld",&arr[j]);getchar();
        }      
        int result = count_3_or_more_on_bits(arr, b);
        printf("Case #%d: %d %d\n", i,result, under);
    }
    
    return 0;
}
