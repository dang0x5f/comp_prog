#include <stdio.h>

int
main(void)
{
    int promoted_p, promoted_g, promoted_s;
    int b0, b1, s0, s1, g0, g1, p0, p1;

    FILE *i = freopen("promote.in" , "r", stdin);
    FILE *o = freopen("promote.out", "w", stdout);

    scanf("%d %d %d %d %d %d %d %d", 
            &b0, &b1, &s0, &s1, 
            &g0, &g1, &p0, &p1);

    promoted_p = p1 - p0;     
    promoted_g = g1 - g0 + promoted_p;
    promoted_s = s1 - s0 + promoted_g;

    printf("%d\n%d\n%d\n", promoted_s,
           promoted_g, promoted_p);

    fclose(i);
    fclose(o);

    return(0);
}
