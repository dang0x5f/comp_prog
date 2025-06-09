#include <stdio.h>
#define SZ 3

void sort(int a[])
{
    for(int i=0; i<SZ-1; ++i){
        if(a[i]>a[i+1]){
            int temp = a[i+1];
            a[i+1] = a[i];
            a[i] = temp;
        }
    }
}

void solve(void)
{
    int a[SZ]={0}, n=5;
    do{
        scanf("%d",&a[0]);
        sort(a);
    }while(getchar()!='\n');
    while(n--){
        ++a[0];
        sort(a);
    }
    printf("%d\n",a[0]*a[1]*a[2]);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();
    
    return(0);
}
