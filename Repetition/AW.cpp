#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        int student;
        scanf("%d", &student);
        int score[student];
        for(int j = 0; j < student; j++){
            scanf("%d", &score[j]);
        }
        int max = 0;
        for(int j=0; j<student; j++){
            if(max<score[j]){
                max=score[j];
            }
        }
        int count = 0;
        for(int k=0; k<student; k++){
            if(max == score[i]){
                count++;
            }
        }
        printf("Case #%d: %d\n", i+1, count);
    }
    
    return 0;
}
