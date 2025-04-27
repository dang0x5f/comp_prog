#include <stdio.h>

int
max(int v1, int v2)
{
    if(v1 > v2)
        return(v1);
    else
        return(v2);
}

int
min(int v1, int v2)
{
    if(v1 < v2)
        return(v1);
    else
        return(v2);
}

int
main(void)
{
    FILE *i = freopen("paint.in" , "r", stdin );
    FILE *o = freopen("paint.out", "w", stdout);

    int a, b, c, d;
    
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    if(c < a){
        int temp = c;
        c = a;
        a = temp;

        temp = d;
        d = b;
        b = temp;
    }

    int len = 0;
    if(c >= b){
        len = (b - a) + (d - c);
    }else{
        if(d > b){
            len = d - a;
        }else{
            len = b - a;
        }
    }
    printf("%d\n", len);

    fclose(i);
    fclose(o);

    return(0);
}
