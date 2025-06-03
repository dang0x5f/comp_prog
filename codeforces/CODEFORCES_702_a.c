#include <stdio.h>

int max(int v1, int v2)
{
    return(v1>v2?v1:v2);
}

int main(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int cnt = 0, max_len = 1, prev = -1, d;
    do{
        scanf("%d",&d);
        if(d > prev){
            ++cnt;
        }else{
            max_len = max(cnt,max_len);
            cnt = 1;
        }
        prev = d;
    }while(getchar()!='\n');
    max_len = max(cnt,max_len);
    
    printf("%d\n",max_len);

    return(0);
}
