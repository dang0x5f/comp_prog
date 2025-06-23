/* Afterword: */
//  - if sum<n , any single int can be used to make up the
//    difference , 1 move
//  - if sum==n , sum/n = 1 , 0 moves
//  - if sum>n , sum-n zeros are added to the array so that
//    sum/n+(sum-n) = 1 , sum-n moves

#include <stdio.h>

void solve(void)
{
    int n, d, sum=0;
    scanf("%d",&n)&&getchar();
    do{
        scanf("%d",&d);
        sum += d;
    }while(getchar()!='\n');
    printf("%d\n",(sum<n?1:sum-n));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
