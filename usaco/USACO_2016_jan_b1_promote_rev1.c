#include <stdio.h>

int
main(void)
{
    int b0 = 0, b1 = 0;
    int s0 = 0, s1 = 0;
    int g0 = 0, g1 = 0;
    int p0 = 0, p1 = 0; 

    FILE *i = freopen("promote.in" , "r", stdin);
    FILE *o = freopen("promote.out", "w", stdout);

    scanf("%d %d", &b0, &b1);
    scanf("%d %d", &s0, &s1);
    scanf("%d %d", &g0, &g1);
    scanf("%d %d", &p0, &p1);

    /* printf("%d %d , %d %d , %d %d , %d %d", */
    /*         b0,b1 , s0,s1 , g0,g1 , p0,p1); */
    
    /* ************************************************************* */
    /*         ans  aft   bef                                        */
    /* ************************************************************* */
    /*          2  = 2  -  0    were promoted up to platinum         */ 
    /*         -2  = 0  -  2    0 to 2 , 2 platinums were demoted    */
    /*          0  = 1  -  1    is no changes                        */
    /* ************************************************************* */
    int promoted_p = p1 - p0;

     
    /* ************************************************************* */
    /*         ans  aft   bef                                        */
    /* ************************************************************* */
    /*          2  = 4  -  4   + promoted_p(2)  2 promotions         */
    /*          6  = 4  -  0   + promoted_p(2)  6 promotions         */
    /*         -2  = 0  -  4   + promoted_p(2)  2 prom , 2 demo      */
    /* ************************************************************* */
    int promoted_g = g1 - g0 + promoted_p;

    
    /* ************************************************************* */
    /*         ans  aft   bef                                        */
    /* ************************************************************* */
    /*          5  = 1  -  2   + promoted_p(6)                       */
    /*          7  = 2  -  1   + promoted_p(6)                       */
    /*          6  = 4  -  4   + promoted_p(6)                       */
    /* ************************************************************* */
    int promoted_s = s1 - s0 + promoted_g;


    printf("%d\n%d\n%d\n", promoted_s, promoted_g, promoted_p);

    fclose(i);
    fclose(o);

    return(0);
}
