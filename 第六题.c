#include<stdio.h>
int main()
{
int year,month,day;
int birthY,birthM,birthD;
int N;
printf("����������");
scanf("%d%d%d",&birthY,&birthM,&birthD);
printf("�����뵱ǰ����");
scanf("%d%d%d",&year,&month,&day);
N=year-birthY+1;
if(month<birthM)
N--;
else
if(month==birthM)
if(day<birthD)
N--;
printf("����Ϊ%d\n",N);
return 0;
}
