#include <stdio.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
#define NCOW 3

int main(void)
{
    FILE *i = freopen("herding.in",  "r", stdin);
    FILE *o = freopen("herding.out", "w", stdout);

    int a[NCOW] = {0};
    do{
        scanf("%d",&a[0]);
        for(int i = 0; i < NCOW-1; ++i){
            if(a[i] > a[i+1]){
                int temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;
            }
        }
    }while(getchar()!='\n');

    if(a[2]-a[0]==2){
        printf("0\n");
    } else{
        if(MIN(a[1]-a[0],a[2]-a[1])==2)
            printf("1\n");
        else
            printf("2\n");
    }

    printf("%d\n",MAX(a[1]-a[0],a[2]-a[1])-1);

    fclose(i);
    fclose(o);

    return(0);
}
