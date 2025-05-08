#include <stdio.h>

int main(void)
{
    int N = 0, X = 0;
    char op, l, r;
    
    scanf("%d",&N) && getchar();
    for(int i = 0; i < N; ++i){
        scanf("%c%c%c",&l,&op,&r) && getchar();
        switch(op){
            case '+':
                X++;
                break;
            case '-':
                X--;
                break;
            default:
                printf("  [err] %c\n", op);
                return(256);
        }
    }
    printf("%d\n", X);

    return(0);
}
