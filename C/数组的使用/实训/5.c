#include <stdio.h>
void main()
{
	int a[3][4],i,j;
	int b[3];
	printf("������3�����и�ֵ:");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	printf("�������ֵΪ��\n");
	for(i=0;i<3;i++)
	{
		b[i]=a[i][0];//ÿ����Ϊ���ֵ
		for(j=0;j<4;j++)
			if(b[i]<a[i][j])
				b[i]=a[i][j];
		printf("%5d\n",b[i]);
	}
}