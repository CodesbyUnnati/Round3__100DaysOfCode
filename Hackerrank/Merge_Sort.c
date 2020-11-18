#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int a[n],i,j,k;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int m;
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    
    int r[n+m];
    i=0;
    j=0;k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            r[k]=a[i];
            k++;
            i++;
        }
        else 
        {
            r[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n)
    {
        r[k]=a[i];
        k++;i++;
    }
    while(j<m)
    {
        r[k]=b[j];
        k++;j++;
    }
    for(i=0;i<n+m;i++)
        printf("%d ",r[i]);
    
    return 0;
}
