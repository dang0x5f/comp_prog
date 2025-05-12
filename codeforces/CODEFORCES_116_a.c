#include <stdio.h>

int main(void)
{
    int n;         
    scanf("%d", &n);
    getchar(); // \n

    int min_cap = 0;
    int a = 0, b = 0;
    int onboard = 0;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        getchar(); // \n
        onboard -= a; 
        onboard += b;
        if(onboard > min_cap)
            min_cap = onboard;
    }
    
    printf("%d\n", min_cap);
    return(0);
}
