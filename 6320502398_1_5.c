#include<Stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n],i,max,b;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(max<a[i])
    {
     max=a[i];
     b=i;
    }
}
printf("%d %d",b+1,max);
}

