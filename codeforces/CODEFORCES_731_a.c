#include <stdio.h>

int min(int v1, int v2)
{
    return(v1<v2?v1:v2);
}

int main(void)
{
    int pos = 'a', rots = 0;
    char c;
    int dist_CW; 
    int dist_CCW;
    while((c=getchar())!='\n'){
        if(c > pos){
            dist_CW = ('z' - c) + (pos - 'a') + 1; //+1 step between Z to A
            dist_CCW = c - pos;
        }else{
            dist_CW = pos - c;
            dist_CCW = ('z' - pos) + (c - 'a') + 1; //+1 step between Z to A
        }
        rots += min(dist_CW,dist_CCW);
        pos = c;
    }
    printf("%d\n",rots);

    return(0);
}
