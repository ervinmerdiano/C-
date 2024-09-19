#include <stdio.h>

int main(){
    long long int a,b; 
	long long int jojo,lili,bibi;
    long long int max = 0;
    
    scanf("%lld",&a);getchar();
    scanf("%lld %lld %lld",&jojo,&lili,&bibi);getchar();
    
    for(int i=0;i<a;i++){
        scanf("%lld",&b);getchar();
        max += b;
    }
    	max += jojo+lili+bibi;
    		
			printf("Jojo%slolos\n",(jojo>=(max / (a+3)))?" ":" tidak ");
   			printf("Lili%slolos\n",(lili>=(max / (a+3)))?" ":" tidak ");
   		 	printf("Bibi%slolos\n",(bibi>=(max / (a+3)))?" ":" tidak ");

	return 0;

}
