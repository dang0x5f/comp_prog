#include <stdio.h>
#include <limits.h>
#include <string.h>

void swap(int *v1, int *v2)
{
    *v1 += *v2;
    *v2 = *v1 - *v2;
    *v1 = *v1 - *v2;
}

void solve(void)
{
    int n,i=0,max1=INT_MIN,max2=INT_MIN;
    scanf("%d",&n)&&getchar();
    int a[n];
    memset(a,0,sizeof(a[0])*n);
    do{
        scanf("%d",&a[i]);
        if(a[i]>max2) max2=a[i];    
        if(max2>max1) swap(&max1,&max2);
        ++i;
    }while(getchar()!='\n');
    
    for(int j=0; j<n; ++j){
        printf("%d ",(a[j]==max1?a[j]-max2:a[j]-max1));
    }
    printf("\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();
    
    return(0);
}
