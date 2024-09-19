#include <stdio.h>

int main(){
    int a,b,c,d,e;
    
    scanf("%d",&a);getchar();
    
    for(int i=1;i<=a;i++){
        scanf("%d %d %d",&d,&b,&c);getchar();
        
        while(d--){
            scanf("%d",&e);getchar();
            c = ((e>c)&&(b>=e))?e:c;
            
        }
        printf("Case #%d: %d\n",i,c);
        
    }
	return 0;
}
