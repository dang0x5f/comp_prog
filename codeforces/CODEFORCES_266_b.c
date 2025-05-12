#include <stdio.h>

int main(void)
{
    int n, t;
    scanf("%d %d", &n, &t);
    getchar(); // \n

    char s[n+1];
    for(int i = 0; i < n; i++)
        scanf("%c",&s[i]);
    s[n] = '\0';
    getchar(); // \n

    for(int j = 0; j < t; j++){
        for(int i = 0; i < n - 1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                s[i]   = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }

    printf("%s\n", s);

    return(0);
}
