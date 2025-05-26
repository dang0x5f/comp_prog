#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isprime(int n)
{
    int i = sqrt(n);
    for(int j = 2; j <= i; ++j){
        if(n%j == 0)
           return(false); 
    }
    return(true);
    
}

int main(void)
{
    int n, m;
    scanf("%d %d",&n,&m)&&getchar();//\n

    if(m%2 == 0){
        printf("NO\n");
        return(0);
    }

    for(int i = n+1; i <= m; ++i){
        if(isprime(i)){
            if(i == m){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
            return(0);
        }
    }
    printf("NO\n");

    return(0);
}
