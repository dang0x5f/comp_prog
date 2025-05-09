#include <stdio.h>

int main(void)
{
    int n = 1, k = 1;

    scanf("%d %d", &n, &k) && getchar();

    int scores[n];
    for(int i = 0; i < n; ++i)
       scanf("%d", &scores[i]) && getchar();
    
    int k_score = scores[k-1];

    int pa = 0;
    
    for(int i = 0; i < n; ++i){
        if(scores[i] >= k_score && scores[i] > 0)
            pa++;
    }

    printf("%d\n",pa);

    return(0);
}
