#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);getchar();
	char c[t][100];
	int n[t];
	for(int i=0;i<t;i++)
	{
		scanf("%d", &n[i]);getchar();
		scanf("%s", c[i]);getchar();		
	}
	
	for(int j=0;j<t;j++)
	{
		int L=0, B=0;
		for(int i=0;i<n[j];i++)
		{
			if(c[j][i]=='L')
				L++;
			else if(c[j][i]=='B')
				B++;
		}
		printf("%s\n", L>B?"Lili":L<B?"Bibi":"None");
	}
}
