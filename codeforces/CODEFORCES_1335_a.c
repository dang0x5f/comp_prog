#include <stdio.h>

int solve(void)
{
    int n;
    scanf("%d", &n) && getchar();// \n
    
    if(n <= 2){
        printf("0\n");
        return(0);
    }

    if(n%2 == 0)
        printf("%d\n", (n - ((n/2)+1)) );
    else
        printf("%d\n", n/2);

    return(0);
}

int main(void)
{
    int t;
    scanf("%d", &t) && getchar();// \n
    while(t--)
        solve();    

    return(0);
}
