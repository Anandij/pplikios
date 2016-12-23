#include<stdio.h>

int main()
{
	int c, i, n, j, put=0;
	scanf("%d", &c);
	for(i=0; i<c; i++)
	{
		scanf("%d", &n);
		for(j=1; j<=n; j++)
		{
			if(n%j==0)
			{
				put+=1;
				//printf("%d ", j);
			}
		}
		printf("%d\n", put);
		put=0;
	}
	return 0;
}
