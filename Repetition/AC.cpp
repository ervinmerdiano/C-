#include <stdio.h>

int main(){
	int t;
	long long int money, price[100000], sum;
	long long int n;
	
	scanf("%d", &t); getchar();
	
	for(int i=1; i<=t; i++){
		scanf("%lld %lld", &n, &money);getchar();
		sum = 0;
		for(int j=0; j<n; j++){
			scanf("%lld", &price[j]);getchar();
			if(money/price[j]>sum){
				sum = money/price[j];
			} 
		}
		printf("Case #%d: %lld\n", i, sum);
	}
	
	
	return 0;
}
