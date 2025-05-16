#include <stdio.h>
#define NBILLS 5

int main(void)
{
    int b = 0;
    int bills[] = {1,5,10,20,100};

    int n;
    scanf("%d", &n);

    for(int i = NBILLS-1; i >= 0; i--){
        if(n >= bills[i]){
            b += n/bills[i];
            n %= bills[i];
        }
        if(n == 0)
            break;
    }
    
    printf("%d\n", b); 

    return(0);
}
