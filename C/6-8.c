#include <stdio.h>
void main()
{
	int a[10],i;
	int max,min;
	printf("������ʮ����ί�Ĵ�֣�\n");
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
	printf("��߷�Ϊ��%d;��ͷ�Ϊ:%d",max,min);
}