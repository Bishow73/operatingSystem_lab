#include<stdio.h>
#include<conio.h>
int main()
{
int m=0, m1=0,m2=0,p,count=0,i;
printf("Enter the memory capacity:");
scanf("%d",&m);
printf("Enter the no of processes:");
scanf("%d",&p);
for (i=0;i<p;i++)
{
	printf("\nEnter memory req for process %d:",i+1);
	scanf("%d",&m1);
	count=count+m1;
if(m1<=m)
{
if(count==m)
{
printf("\nThere is no further memory remaining:");
}
else
{
printf("\nThe memory allocated for process %d is: %d ",i+1 ,m);
m2 = m-m1;
printf("\n Remaining memory is :%d",m2);
m=m2;
}
}
else
{
printf("\nMemory is not allocated for process%d",i+1);
}
printf("\nExternal fragmentation for this process is :%d",m2);
}
getch();
}

