#include <stdio.h>

void solve(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    getchar(); // \n

    int c = 0;
    if(a%b){
        c = b-a%b;
    }
    
    printf("%d\n", c);
}

int main(void)
{
    int t;
    scanf("%d", &t);
    getchar(); // \n

    for(int i = 0; i < t; i++)
        solve();     
    
    return(0);
}
