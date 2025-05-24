#include <stdio.h>
#include <string.h>

int min(int v1, int v2)
{
    return (v1 < v2) ? 
           (v1):(v2) ;
}

int main(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n

    int d;
    int t1[n],t1i=0, t2[n],t2i=0, t3[n],t3i=0;
    memset(t1,-1,n*sizeof(t1[0]));
    memset(t2,-1,n*sizeof(t2[0]));
    memset(t3,-1,n*sizeof(t3[0]));
    for(int i = 0; i < n; ++i){
        scanf("%d",&d)&&getchar();//\s\n
        switch(d){
            case 1: t1[t1i++] = i; 
                    break;
            case 2: t2[t2i++] = i; 
                    break;
            case 3: t3[t3i++] = i; 
                    break;
        }
    }
    int min_t = min(t1i,min(t2i,t3i));
    if(min_t == 0){
        printf("0\n");
        return(0);
    }
    
    printf("%d\n",min_t);
    for(int i = 0; i < min_t; ++i)
        printf("%d %d %d\n", t1[i]+1,t2[i]+1,t3[i]+1);

    return(0);
}
