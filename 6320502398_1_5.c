#include<Stdio.h>
int main()
{
int n,i,max=0,b=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(max<a[i])
    {
     max=a[i];
    }
    if(max==a[i])
    {
     b=i;
     break;
    }
}
printf("%d %d",b+1,max);
}

