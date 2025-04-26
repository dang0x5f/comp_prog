#include <stdio.h>

#define LOCATIONS 3

int 
max(int v1, int v2)
{
    if(v1 > v2)
        return(v1);
    else
        return(v2);
}

int
main(void)
{
    int temp = 0;
    int a = 0, b = 0, c = 0;
    int ans_max, ans_min;

    FILE *i = freopen("herding.in",  "r", stdin);
    FILE *o = freopen("herding.out", "w", stdout);

    for(int x = 0; x < LOCATIONS; x++){
        scanf("%d", &temp);
        if(temp >= c){
            a = b;
            b = c;
            c = temp;
        } else if(temp >= b) {
            a = b;
            b = temp;
        } else {
            a = temp;
        }
    }
    
    if(c - a == 2){
        ans_min = 0;
    } else {

        if(c - b == 2 || b - a == 2){
            ans_min = 1;
        } else {
            ans_min = 2;
        }
    }

    ans_max = max(c - b - 1, b - a - 1);

    printf("%d\n%d\n", ans_min, ans_max);
    
    fclose(i);
    fclose(o);

    return(0);
}
