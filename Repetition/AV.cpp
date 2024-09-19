#include <stdio.h>
#include <math.h>

long long calculateCombinations(int N, int k) {
    long long result=1;
    
    for(int i=1; i<=k; i++) {
        result *= (N - i + 1);
        result /= i;
    }
    return result;
}

int main(){
    int N;
    int k = 3;
    
    scanf("%d", &N);getchar();
    
	long long combinations = calculateCombinations(N + k - 1, k - 1);
    
	printf("%lld\n", combinations);
    
	
	return 0;

}
