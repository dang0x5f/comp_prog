#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

void solve(void)
{
    int n,m;
    scanf("%d %d",&n,&m)&&getchar();
    int l=0;

    int max = MAX(n,m); 
    int min = MIN(n,m); 

    if(max==1&&min==1){
        printf("1\n");
        return;
    }else{
        l += max/2;
        l = l*min;
        if(max & 1)
            l += (min&1)?(min/2)+1:min/2;
    }
    printf("%d\n",l);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();    
    while(t--)
        solve();

    return(0);
}

// .--------------.
// |  |  |  |  |  |
// ----------------
// |  |  |  |  |  |     base
// ----------------
// |  |  |  |  |  |
// *--------------*

// .--------------.
// |  +  |  +  |  +
// ----------------
// |  +  |  +  |  +     6
// ----------------
// |  +  |  +  |  +
// *--------------*

// .-------------+.
// |  +  |  +  |  |
// ----------------
// |  +  |  +  |  |     5
// --------------+-
// |  +  |  +  |  |
// *--------------*
// 5 NOT 6 when last column is odd to get
//  min lanterns. see solution.

