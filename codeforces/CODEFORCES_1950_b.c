/* Afterword:                                                       */
/*   solve2() taken from tutorial. This works because as            */
/*   row_count and col_count increase, dividing by 2 will return    */
/*   even / odd in intervals of two leveraging interval division.   */
/*   ex. ( 0/2=0 , 1/2=0 ) , ( 2/2=1 , 3/2=1 )                      */ 
/*       ( 4/2=2 , 5/2=2 ) , ( 6/2=3 , 7/2=3 )                      */ 

#include <stdio.h>

void swap(char *c1, char *c2)
{
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    char c1 = '#', c2 = '.';
    int cntr = 0;
    for(int row=0; row<n*2; ++row){
        for(int col=0; col<n; ++col){
            if(col % 2 == 0)
                printf("%c%c",c1,c1);
            else
                printf("%c%c",c2,c2);
        }
        printf("\n");
        ++cntr;
        if(cntr==2) {
            swap(&c1,&c2);
            cntr = 0;
        }
    }
}

void solve2(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    for(int i=0; i<n*2; ++i){
        for(int j=0; j<n*2; ++j){
            printf("%c", ((i/2 + j/2)&1?'.':'#'));
        }
        printf("\n");
    }
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve2();

    return(0);
}
