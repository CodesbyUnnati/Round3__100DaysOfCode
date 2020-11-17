#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;
}
