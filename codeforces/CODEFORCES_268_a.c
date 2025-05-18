#include <stdio.h>

int main(void)
{
    int ans = 0;

    int n;
    scanf("%d", &n) && getchar(); // \n
    
    int h[n];// = {};
    int a[n];// = {};
    for(int i = 0; i < n; ++i)
        scanf("%d %d", &h[i], &a[i]) && getchar(); // \n
    
    for(int h1 = 0; h1 < n; ++h1){
        for(int a1 = 0; a1 < n; ++a1){
            if(h[h1] == a[a1])
                ans++;
        }
    }

    printf("%d\n", ans);

    return(0);
}
