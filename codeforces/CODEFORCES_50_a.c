#include <stdio.h>

int main(void)
{
    int M, N;
    scanf("%d %d", &M, &N);

    if(M == 1 && N == 1){
        printf("0\n");
        return(0);
    }

    if(M == 1 || N == 1){
        if(M == 1)
            printf("%d\n",(N/2));
        else
            printf("%d\n",(M/2));
    }else{
        if((M % 2) == 0)
            printf("%d\n",((M/2)*N));
        else if((N % 2) == 0)
            printf("%d\n",((N/2)*M));
        else
            printf("%d\n",(((M/2)*N) + (N/2)));
    }

    return(0);
}
