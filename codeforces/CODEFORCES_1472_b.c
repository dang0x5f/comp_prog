#include <stdio.h>

void solve(void)
{
    int n, a[2] = {0};
    scanf("%d",&n)&&getchar();//\n
    char c;
    do{
        scanf("%c",&c);
        if(c=='1') ++a[0];
        else       ++a[1];
    }while(getchar()!='\n');
    
    if( (a[0] + (a[1]*2)) % 2 != 0 ){
        printf("NO\n");
    }else{
        int h = ((a[0] + (a[1]*2)) / 2);
        if(h % 2 == 0 || (h % 2 == 1 && a[0] != 0)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
