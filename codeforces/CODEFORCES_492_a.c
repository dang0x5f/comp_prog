#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n

    int h = 0, f = 1, c = 0;
    while(1){
        if( (n-(f+c)) >= 0 ){
            c += f;
            n -= c;
            ++f;
            ++h;
        }else{
            break;
        }
    }
    printf("%d\n", h);

    return(0);
}

