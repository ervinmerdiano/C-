#include <stdio.h>

int main(){
	long long int daging, sayur, telur;
	scanf("%lld %lld %lld", &daging, &sayur, &telur);

	if(daging >= sayur && daging >= telur){
		printf("Daging\n");
		if(sayur >= telur){
			puts("Sayur\nTelur");
		} else{
			puts("Telur\nSayur");
		}
	}
	else if(sayur >= daging && sayur >= telur){
		printf("Sayur\n");
		if(daging >= telur){
			puts("Daging\nTelur");
		} else{
			puts("Telur\nDaging");
		}
	}
	else if(telur >= daging && telur >= sayur){
		printf("Telur\n");
		if(daging >= sayur){
			puts("Daging\nSayur");
		} else{ 
			puts("Sayur\nDaging");
		}
	}
	
	return 0;
}
