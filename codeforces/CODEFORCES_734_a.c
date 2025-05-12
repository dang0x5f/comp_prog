#include <stdio.h>

int compare(int a, int d)
{
    if(a == d)
        return(0);
    else if(a > d)
        return(-1);
    else
        return(1);
}

int main(void)
{
    int n;
    scanf("%d", &n); 
    getchar();
    
    char c; 
    int awins = 0, dwins = 0;
    while( (c = getchar()) != '\n' ){
        if(c == 'A')
            awins++;
        else
            dwins++;
    }
    switch(compare(awins,dwins)){
        case 0:
            printf("Friendship\n");
            break;
        case -1:
            printf("Anton\n");
            break;
        case 1:
            printf("Danik\n");
            break;
    }

    return(0);
}
