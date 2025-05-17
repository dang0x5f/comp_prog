#include <stdio.h>
#define ARRSZ 128

int main(void)
{
    char c;
    int ans = {0};
    int arr[ARRSZ+1] = {0};
    getchar(); // {
    while( (c = getchar()) != '}' ){
        if(c == ',' || c == ' ') continue;
        if( arr[(int)c] == 0 ){
            arr[(int)c] = 1;
            ans++;
        }
    }
    printf("%d\n",ans);

    return(0);
}
