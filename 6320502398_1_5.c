#include <stdio.h>
int main()
{
    int n,i,max=0,b=0;
    scanf ("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf ("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            b=i;
        }
    }
    printf ("%d %d",b,max);

}

