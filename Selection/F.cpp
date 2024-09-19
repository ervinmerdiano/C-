#include <stdio.h>

int main(){
    long int d,s,t;
    scanf("%ld %ld %ld", &d,&s,&t);

    if(d>s && d>t){
        printf("Daging\n");
        if(s>t){
            printf("Telur\nSayur\n");
        } else{
            printf("Sayur\nTelur\n");
        }
    } else if(s>d && s>t){
        printf("Sayur\n");
        if (d>t){
            printf("Daging\nTelur\n");
        } else{
            printf("Telur\nDaging\n");
        }
    } else{
        printf("Telur\n");
        if (d>s){
            printf("Daging\nSayur\n");
        } else{
            printf("Sayur\nDaging\n");
        }
    }

    return 0;
}
