#include <stdio.h>
#include <limits.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

int solve(int start, int end, int min)
{
    int cost,ncity;
    scanf("%d %d",&cost,&ncity)&&getchar();
    
    int city, start_found=0, end_found=0;
    do{
        scanf("%d",&city);

        if(city==start && end_found==0)
            start_found = 1;
        else if(city==end && start_found==1)
            end_found = 1;

    }while(getchar()!='\n');

    if(start_found && end_found)
        min=MIN(cost,min);

    return(min);
}

int main(void)
{
    FILE *i = freopen("cowroute.in", "r", stdin);
    FILE *o = freopen("cowroute.out", "w", stdout);

    int A,B,N,min=INT_MAX;
    scanf("%d %d %d",&A,&B,&N)&&getchar();
    while(N--)
        min=solve(A,B,min);
    printf("%d\n",(min>1000?-1:min));

    fclose(i);
    fclose(o);

    return(0);
}
