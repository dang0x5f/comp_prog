#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

typedef struct {
    bool spotted;
    int weight;
} Cow;

void read_input(Cow *ncows, int N)
{
    int w;
    char s;
    for(int i=0; i<N-2; ++i){
        if((s=getchar())=='S'){
            ncows[i].spotted=true;
        }else{
            ncows[i].spotted=false;
            getchar();
        }
        getchar();
        scanf("%d",&ncows[i].weight);
        getchar();
    }
    int INF = 1000*1000*1000;
    ncows[N-2].spotted = false; 
    ncows[N-2].weight = -INF;
    ncows[N-1].spotted = false; 
    ncows[N-1].weight = INF;
}

int compare_cows(const void *a, const void *b)
{
    Cow *cow_a = (Cow*)a;
    Cow *cow_b = (Cow*)b;

    if(cow_a->weight > cow_b->weight)
        return(1);
    else if(cow_a->weight < cow_b->weight)
        return(-1);
    else
        return(0);
}

int process_cows(Cow *ncows, int N, int A, int B)
{
    int ans=0;
    for(int i=0; i<N-1; ++i){
        int start = ncows[i].weight;
        int end = ncows[i+1].weight;
        int mid = (start+end)/2;

        if(ncows[i].spotted){
            int s = MAX(A,start+1);
            int e = MIN(B,mid);
            ans += ((e>=s)?e-s+1:0);
        }

        if(ncows[i+1].spotted){
            int s = MAX(A,mid+1);
            int e = MIN(B,end);
            ans += ((e>=s)?e-s+1:0);
        }
        
        if((!ncows[i].spotted && ncows[i+1].spotted) &&
           ((start%2) == (end%2)) && (A<=mid) && (mid<=B)) {
            ++ans;
        }
    }

    return(ans);
}

int main(void)
{
    FILE *i = freopen("learning.in", "r", stdin);
    FILE *o = freopen("learning.out", "w", stdout);

    int N, A, B;
    scanf("%d %d %d",&N, &A, &B)&&getchar();

    // read 
    Cow ncows[N+2];
    read_input(ncows,N+2);

    // sort
    qsort(ncows, N+2, sizeof(Cow), compare_cows);
    
    // proc
    printf("%d\n",process_cows(ncows,N+2,A,B));

    fclose(i);
    fclose(o);

    return(0);
}
