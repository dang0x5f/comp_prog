#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool can_play = false;
    char r,s, tr,ts;
    scanf("%c%c",&r,&s)&&getchar();
    do{
        scanf("%c%c",&tr,&ts);
        if(tr==r  || ts==s){
            printf("YES\n");
            return(0);
        }
    }while(getchar()!='\n');
    printf("NO\n");

    return(0);
}
