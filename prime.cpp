#include<stdio.h>

int main()
{
	int n, i, j;
	scanf("%d", &n);
	for(i=2; i<n; i++)
	{
		for(j=1; j<i; j++)
		{
			if(i%j==0)
			{
				printf("%d ", j);
			}
		}
	}
}
