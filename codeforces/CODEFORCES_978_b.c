#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    
    int c, xbuf=0, cnt=0;
    while((c=getchar()) != '\n'){
        switch(c){
            case'x':
                ++xbuf;
                if(xbuf==3){
                    ++cnt;
                    --xbuf;
                }
                break;
            default:
                xbuf=0;
        }
    }
    printf("%d\n",(cnt?cnt:0));

    return(0);
}
