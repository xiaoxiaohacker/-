#include <stdio.h>
void main()
{
	int a[10],i;
	int max,min;
	printf("请输入十个评委的打分：\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	max=min=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("最高分为：%d;最低分为:%d",max,min);
}