#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar(); // \n
    
    char c;
    for(int i = 0; i < n; i++){
        scanf("%c", &c);
        if(c == '1'){
            printf("HARD\n");
            return(0);
        }
        getchar();
    }
    printf("EASY\n");
    return(0);
}
