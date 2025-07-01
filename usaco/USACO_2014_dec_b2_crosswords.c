#include <stdio.h>

int main(void)
{
    FILE *i = freopen("crosswords.in", "r", stdin);
    FILE *o = freopen("crosswords.out", "w", stdout);

    int n,m;
    scanf("%d %d",&n, &m)&&getchar();
    
    char grid[n*m];
    for(int row=0; row<n; ++row){
        for(int col=0; col<m; ++col){
            scanf("%c",&grid[row*m+col]);
        }
        getchar();//\n
    }

    char cell;
    int p1,p2;
    int x[n*m],y[n*m],t=0;
    for(int row=0; row<n; ++row){
        for(int col=0; col<m; ++col){
            cell=grid[row*m+col];
            if(cell=='#')
                continue;

            //horizontal 
            p1=( (col==0) || 
                 (grid[(row*m)+col-1]=='#') );
            p2=( (col+2<m) &&
                 (grid[(row*m)+col+1]=='.') &&
                 (grid[(row*m)+col+2]=='.') );
            if(p1 && p2){
                x[t]=row+1;
                y[t]=col+1;
                ++t;
                continue;
            }

            //vertical
            p1=( (row==0) ||
                 (grid[(row-1)*m+col]=='#') );
            p2=( (row+2<n) &&
                 (grid[(row+1)*m+col]=='.') &&
                 (grid[(row+2)*m+col]=='.') );
            if(p1 && p2){
                x[t]=row+1;
                y[t]=col+1;
                ++t;
                continue;
            }
        }
    }

    printf("%d\n",t);
    for(int i=0; i<t; ++i)
        printf("%d %d\n",x[i],y[i]);

    fclose(i);
    fclose(o);

    return(0);
}
