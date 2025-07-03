#include <stdio.h>
#define SZ 26

typedef struct {
    char w[4];
    size_t size;
}Word;

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    
    Word min = {
        .w = {'z','z','z','\0'},
        .size = 'z'+'z'+'z'+'\0'
    };

    Word cur = {
        .w = {'\0','\0','\0','\0'},
        .size = 0
    };

    for(int i=0; i<SZ; ++i){
        for(int j=0; j<SZ; ++j){
            for(int k=0; k<SZ; ++k){
                if(i+j+k +3 == n){
                    cur.w[0] = (i+'a');
                    cur.w[1] = (j+'a');
                    cur.w[2] = (k+'a');
                    cur.size = (i+'a') + (j+'a') + (k+'a');
                    
                    if(cur.size < min.size){
                        min.w[0] = cur.w[0];
                        min.w[1] = cur.w[1];
                        min.w[2] = cur.w[2];
                        min.size = cur.size;
                    }
                }
            }
        }
    }
    
    printf("%s\n",min.w);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
