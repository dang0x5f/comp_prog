#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar(); // \n 

    if(n < 26){
        printf("NO\n");
        return(0);
    }
    
    int l = 0;
    char c;
    int s[91] = {0};
    for(int i = 0; i < n; i++){
        scanf("%c", &c);
        if(c > 90)
            c -= 32;
        if(s[c] == 0){
            s[c] = 1;
            l++;
        }
    }
    if(l == 26){
        printf("YES\n");
        return(0);
    }
    
    printf("NO\n");
    return(0);
}
