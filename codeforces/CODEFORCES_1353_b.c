#include <stdio.h>
#include <string.h>
#define FWD 0
#define REV 1

int max(int v1, int v2)
{
    return(v1>v2?v1:v2);
}

void read_arr(int arr[], int sz, int dir)
{
    int sum = 0;
    memset(arr,0,sz*sizeof(arr[0]));
    if(dir == FWD){
        do{
            scanf("%d",&arr[0]);
            for(int j = 0; j < sz-1; ++j){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
            }
        }while(getchar()!='\n');
    }else{
        do{
            scanf("%d",&arr[sz-1]);
            for(int j = sz-1; j > 0; --j){
                if(arr[j]>arr[j-1]){
                    int temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }while(getchar()!='\n');
    }
}

void solve(void)
{
    int n, k;
    scanf("%d %d",&n,&k)&&getchar();//\n
    int a[n],b[n],ans=0;
    read_arr(a,n,FWD);
    read_arr(b,n,REV);
    for(int i = 0; i < n; ++i){
        if(i < k) ans += max(a[i],b[i]);
        else      ans += a[i];
    }
    printf("%d\n",ans);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
