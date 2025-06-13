#include <stdio.h>
#include <stdlib.h>

char* am = "AM";
char* pm = "PM";

void solve(void)
{
    int h,m;
    scanf("%d:%d",&h,&m)&&getchar();
    char* meridiem = am;
    if(h>=12) meridiem = pm;

    if(h<1 || h>12) h = abs(h-12);

    if(h<10) printf("0%d:",h);
    else printf("%d:",h);

    if(m<10) printf("0%d %s\n",m,meridiem);
    else printf("%d %s\n",m,meridiem);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
