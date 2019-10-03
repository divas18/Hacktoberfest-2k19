#include<stdio.h>

int main()
{
	int n,a[65]={0},i=0,m;
	scanf("%d",&n);
	while(n>0)
	{
	a[i]=n%2;
	n/=2;
	i++;
	}
		
	for(m=i-1;m>=0;m--)
	printf("%d",a[m]);
}
