#include <stdio.h>
int fun(int n);
int fun(int n)
{
	if(n==1||n==2)
		return 1;
	else
		if(n>=3)
		return (n-1)+(n-2);
}
void main()
{
	int n,s;
	printf("«Î ‰»Î");
	scanf("%d",&n);
	s=fun(n);
	printf("%d",s);
}