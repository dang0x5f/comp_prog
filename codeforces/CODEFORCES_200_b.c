#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar(); // \n

    int pct = 0;
    int numer = 0;
    int denom = 0;
    while(n--){
        scanf("%d", &pct);
        getchar(); // \s
        numer += pct;
        denom += 100;
    }
    printf("%f\n", ((float)numer/denom)*100);

    return(0);
}
