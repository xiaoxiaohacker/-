#include <stdio.h>
void main()
  {
    /*请编写程序实现以下功能：输入的整型变量m，计算下列公式的值：
     t=1+1/2+1/3+1/4+……+1/m
    例如若输入10，则应输出2.928968*/
    int m,i;
    float t=0;
    printf("请输入一个整数:");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    t=t+1.0/i;
    printf("t=%f\n",t);
  }