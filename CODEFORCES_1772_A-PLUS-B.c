#include <stdio.h>

int
main(void)
{
    int cases;
    int num1, num2;
    scanf("%d", &cases);
    for(int x = 0; x < cases; x++){
        scanf("%d+%d",&num1,&num2);
        printf("%d\n", num1 + num2);
    }
    
    /* printf("%d %d\n", num1, num2); */
    return(0);
}
