#include <stdio.h>
#define SZ 4

int max(int v1, int v2)
{
    return(v1>v2?v1:v2);
}

void solve(void)
{
    int i = 0, s[SZ] = {0}, s2[SZ] = {0};
    do{
        scanf("%d",&s[i]);
        s2[0] = s[i];
        for(int j = 0; j < SZ-1; ++j){
            if(s2[j]>s2[j+1]){
                int temp = s2[j+1];
                s2[j+1] = s2[j];
                s2[j] = temp;
            }
        }
        ++i;
    }while(getchar()!='\n');
    int s_max1 = max(s[0],s[1]);
    int s_max2 = max(s[2],s[3]);
    if( (s_max1 == s2[2] || s_max1 == s2[3]) && 
        (s_max2 == s2[2] || s_max2 == s2[3])  ){
        printf("YES\n");
    }else{
        printf("NO\n");
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
