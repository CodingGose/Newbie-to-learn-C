#include<stdio.h>
int main()
{
int year,month,day;
int birthY,birthM,birthD;
int N;
printf("请输入生日");
scanf("%d%d%d",&birthY,&birthM,&birthD);
printf("请输入当前日期");
scanf("%d%d%d",&year,&month,&day);
N=year-birthY+1;
if(month<birthM)
N--;
else
if(month==birthM)
if(day<birthD)
N--;
printf("年龄为%d\n",N);
return 0;
}
