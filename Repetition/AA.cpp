#include <stdio.h>

int main(){
    int N, ki;
	int position = 0;
 
    scanf("%d", &N); 
    for(int i=0; i<N; ++i){
        scanf("%d", &ki);
        position += ki;

        if (position == 9){
            position = 21;
        } else if(position == 33){
            position = 42;
        } else if(position == 76){
            position = 92;
        } else if(position == 53){
            position = 37;
        } else if(position == 80){
            position = 59;
        } else if(position == 97){
            position = 88;
        }
    }

    printf("%d\n", position);

    return 0;
}
