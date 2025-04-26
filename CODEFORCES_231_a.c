#include <stdio.h>

int
main(void)
{
    int count, p, v, t;
    int num_cases;
    int solutions = 0;

    scanf("%d", &num_cases);

    for(int i = 0; i < num_cases; i++){
        count = 0;
        scanf("%d %d %d", &p, &v, &t);
        count = p + v + t;

        if(count >= 2)
            solutions++;
    }
    printf("%d\n", solutions);

    return(0);
}
