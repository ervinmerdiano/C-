#include <stdio.h>

int main() {
    long long int n;
    long long int stock;
    long long int hasil = 0;
    
    scanf("%lld", &n);
    
    for(int i=0; i<n ; i++){
    	scanf("%lld", &stock);
    	if(stock>0){
    		hasil += stock;
		}else{
			hasil += 0;
		}
	}
    printf("%lld\n", hasil);

    return 0;
}
