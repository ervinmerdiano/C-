#include <stdio.h>
#include <string.h>

void convertToSecretCode(char *message, long long int d) {
    int length = strlen(message);

    for(int i=0; i<length; i++){
        char c = message[i];
        
        if(c >= 'a' && c <= 'z'){
            int originalValue = c-'a';
            int secretValue = (originalValue + d)%26; 
            
            char secretChar = 'a'+secretValue;
            message[i] = secretChar;
        }
      
    }
}

int main(){
    char message[100];
    long long int d,e,f;

    scanf("%lld", &e);
    for(int i=1;i<=e;i++){
        scanf("%lld %lld",&f, &d);
        scanf("%s", message);
        convertToSecretCode(message, d);
        printf("Case #%d: %s\n",i, message);
    }
    return 0;
}
