# include<stdio.h>
int main()
{
int a[]={5,7,9,4,1};
int temp,i,j;
for(i=0;i<5;i++)
{
temp=a[i];
for(j=1;j<5;j++)
{
j=i-1;
while(temp>a[j] && j>=0)
{
a[j+1]=a[j];
--j;
}
a[j+1]=temp;
}
printf("in descending order:");
}
for(i=0;i<5;i++);
{
printf("%d",&a[i]);
}
return 0;
}
