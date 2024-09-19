#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int n,ans;
    scanf("%d",&a);getchar();
    for(int i=1;i<=a;i++){
        scanf("%d",&n);getchar();
        
        ans = n;
        
        char*k=(char*)calloc((int)n,sizeof(char));
        char*s=(char*)calloc((int)n,sizeof(char));
        
        	for(int j=0;j<n;j++){
        	scanf("%c",&s[j]);
        	}getchar();
        	
				for(int j=0;j<n;j++){
        		scanf("%c",&k[j]);
        		ans-=(k[j]!=s[j])?1:0;
        		}
        		getchar();
        		printf("Case #%d: %d\n",i,(ans*100/n));
    }
    
    return 0;
}
