#include <stdio.h>

int main(void)
{
    const char* hate = "I hate";
    const char* love = "I love";
    const char* that = "that";
    const char* it = "it";
    
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0 && i != n){
            printf("%s %s ", hate, that);
            continue;
        }
        if(i % 2 == 0 && i != n){
            printf("%s %s ", love, that);
            continue;
        }

        if(i == n){
            if(i%2 != 0)
                printf("%s %s\n", hate, it);
            else
                printf("%s %s\n", love, it);
            break;
        }
    }

    return(0);
}
