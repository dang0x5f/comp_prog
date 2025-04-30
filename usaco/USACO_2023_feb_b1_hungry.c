#include <stdio.h>

int
main(void)
{
    int N;
    long long T;
    long long t = 1;
    long long ans = 0;

    scanf("%d %lld", &N, &T);

    for(int i = 0; i < N; i++){

        long long d;
        long long b;

        scanf("%lld %lld", &d, &b);

        if(t <= d) t = d;
        if(T - t + 1 < b) b = T - t + 1;

        ans += b;
        t += b;

        if(t == T) break;
    }

    printf("%lld\n", ans); 

    return(0);
}
