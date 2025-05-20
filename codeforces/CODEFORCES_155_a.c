#include <stdio.h>

int main(void)
{
    int ans = 0;
    int n;
    scanf("%d",&n)&&getchar();//\n
    
    int d;
    int max, min; 
    scanf("%d",&d)&&getchar();//\n
    max = min = d;
    for(int i = 1; i < n; ++i){
        scanf("%d",&d)&&getchar();//\n
        if(d > max){
            ans++;
            max = d;
        }
        if(d < min){
            ans++;
            min = d;
        } 
    }
    printf("%d\n",ans);

    return(0);
}
