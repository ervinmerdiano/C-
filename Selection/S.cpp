#include <stdio.h>

int main(){
    int a;
    int i;
    double degree;
    double second;
    scanf("%d", &a);
    
    for(int i = 0; i < a; i++){
    	scanf("%lf %lf", &degree, &second);
    	getchar();
    	
    	double rotate = degree * second / 360;
    	printf("%.2lf\n", rotate);
	}
    return 0;
}
