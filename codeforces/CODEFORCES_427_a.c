#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d",&n);

    int nr = 0;
    int nc = 0;
    for(int i = 0; i < n; ++i){
        int c;
        scanf("%d",&c)&&getchar();//\s\n
        if(c > 0){
            nr += c;
        }else{
            if(nr > 0)
                nr += c;
            else
                nc += c;
        }
    }
    printf("%d\n", abs(nc));

    return(0);
}
