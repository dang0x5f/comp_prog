#include <stdio.h>
#include <stdlib.h>

#define MAXN (10*10*10*10*10)

/* https://usaco.org/index.php?page=viewproblem2&cpid=1275 */

int
main(void)
{
    long long N;
    scanf("%lld", &N);

    char *cows = malloc(sizeof(char) * N + 1);
    /* char cows[N+1]; */
    /* for(int i = 0; i < N; i++) */
        /* scanf("%c", &cows[i]); */
    scanf("%s", cows);
    /* printf("%s\n", cows); */

    long long list[N];
    for(long long i = 0; i < N; i++){
        scanf("%lld", &list[i]);
        list[i]--;
        /* printf("%d", list[i]); */
    }

    long long eG = -1, eH = -1;
    long long lG = -1, lH = -1;
    long long ans = 0;

    for(long long i = 0; i < N; i++){
        if(cows[i] == 'G'){
            eG = i;
            break;
        }
    }
    for(long long i = N - 1; i >= 0; i--){
        if(cows[i] == 'G'){
            lG = i;
            break;
        }
    }
    for(long long i = 0; i < N; i++){
        if(cows[i] == 'H'){
            eH = i;
            break;
        }
    }
    for(long long i = N - 1; i >= 0; i--){
        if(cows[i] == 'H'){
            lH = i;
            break;
        }
    }
    
    if(list[eG] >= lG){
        for(long long i = 0; i < eG; i++){
            if(i == eH)
                continue;
            if(cows[i] == 'H' && list[i] >= eG)
                ans++;
        }
    }
    if(list[eH] >= lH){
        for(long long i = 0; i < eH; i++){
            if(i == eG)
                continue;
            if(cows[i] == 'G' && list[i] >= eH)
                ans++;
        }
    }

    if( (list[eG] >= lG || (eG <= eH && list[eG] >= eH)) && 
        (list[eH] >= lH || (eH <= eG && list[eH] >= eG)) )
        ans++;

    printf("%lld\n", ans);

    return(0);
}
