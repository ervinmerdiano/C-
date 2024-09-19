#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isValidIPv10(char *s) {
    int len = strlen(s);
    if (len != 11) {
        return 0;
    }
    for(int i=0; i<len; i++){
        if(i%2 == 0 && (s[i] < '0' || s[i] > '9')){
            return 0;
        } else if(i%2 == 1 && s[i]!= '.') {
            return 0; 
        }
    }
    return 1; 
}
int main(){
    int T;
    scanf("%d", &T);getchar();

    for(int case_num = 1; case_num <= T; case_num++){
        char S[101];
        scanf("%[\n]", S);getchar();
        int result = isValidIPv10(S);
        printf("Case #%d: %s\n", case_num, (result ? "YES" : "NO"));
    }

    return 0;
}
