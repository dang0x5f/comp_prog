#include <stdio.h>

int solve(int a, int b){
    if(a > b)
        return(0);
    else
        return(solve(a*3, b*2) + 1);
}

int main(void)
{
    int a , b;

    scanf("%d %d", &a, &b);
    printf("%d\n", solve(a,b));

    return(0);
}
