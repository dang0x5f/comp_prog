#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int a[n], i=0, max=0, min=0;
    do{
        scanf("%d",&a[i]);
        max=(a[i]>a[max]?i:max);
        min=(a[i]<a[min]?i:min);
        ++i;
    }while(getchar()!='\n');

    int moves=0;
    int min_i = MIN(min,max);
    int max_i = MAX(min,max);

/*
 *      arr  =  O O O O O O O 
 *      opt1 =  X X X - - - -   quickest L->R
 *      opt2 =  - - - - X X X   quickest L<-R
 *      opt2 =  X - - - - - X   quickest L&&R
 */

    moves = MIN( MIN( max_i+1, (n-1)-min_i+1), min_i+((n-1)-max_i)+2 );

    printf("%d\n",moves);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
