#include <stdio.h>

int main(void)
{
    int B, E;

    FILE *i = freopen("greetings.in",  "r", stdin);
    FILE *o = freopen("greetings.out", "w", stdout);

    scanf("%d %d", &B, &E);

    int dis[B+E];
    char dir[B+E];
    for(int i = 0; i < B+E; i++)
        scanf("%d %c", &dis[i], &dir[i]);

    /* for(int i = 0; i < B+E; i++) */
    /*     printf("%d %c\n", dis[i], dir[i]); */

    int moos = 0;
    int B_loc = 0, E_loc = 0;

    fclose(i);
    fclose(o);
    

    return(0);
}
