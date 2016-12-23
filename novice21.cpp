#include<stdio.h>

int main()
{
	int A,B,N,c,i,j,put=0;
	scanf("%d", &c);
	for(i=0; i<c; i++)
	{
		scanf("%d %d %d", &A, &B, &N);
		for(j=A; j<=B; j++)
		{
			if(j%N==0)
			{
				put+=1;
				//printf("%d ", j);
			}
		}
		printf("%d\n", put);
		put=0;
		//printf("\n");
	}
	return 0;
}
