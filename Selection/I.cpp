#include <stdio.h>

int main(){
    double length;
    double width;
    double height;
    
    scanf("%ld %lf %lf", &length, &width, &height);
    
	double triangle = 0.5 * width * heigth;
	double wrapper = (3 * width) * length;
	double total = 2 * triangle + wrapper;
	
    printf("%.3lf\n", total);

    return 0;
}
