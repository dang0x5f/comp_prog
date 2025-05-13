#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar(); // \n

    int gp = 1;
    char p1, p2;
    char o1, o2;
    
    scanf("%c%c",&p1,&p2);
    getchar(); // \n
    o1 = p1;
    o2 = p2;
    n--;
    while(n--){
        scanf("%c%c",&p1,&p2);
        getchar(); // \n
        if(p1 != o1 && p2 != o2){
            gp++;
            o1 = p1;
            o2 = p2;
        }
    }
    printf("%d\n", gp); 

    return(0);
}
