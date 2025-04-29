#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int 
comp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int
main(void)
{
    int N, X;
    scanf("%d %d", &N, &X);

    int arr[N];
    for(int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    int arr_orig[N];
    memcpy(arr_orig, arr, N * sizeof(arr[0]));
    qsort(arr, N, sizeof(arr[0]), comp);

    int sum = 0;
    int i0 = 0;
    int i1 = N - 1;
    bool found = false;     
    while(i0 < i1){
        sum = arr[i0] + arr[i1];

        if(sum == X){
            found = true;
            break;
        }

        if(sum > X){
            i1--;
            continue;
        }  

        if(sum < X) {
            i0++;
            continue;
        }
    }

    if(!found){
        printf("IMPOSSIBLE\n");
        exit(0);
    }

    int val1 = arr[i0], val1_ind = -1;
    int val2 = arr[i1], val2_ind = -1;

    
    for(int i = 0; i < N; i++){

        if(val1_ind == -1 && val1 == arr_orig[i]) 
            val1_ind = i;

        if(val2_ind == -1 && val1_ind != i && val2 == arr_orig[i]) 
            val2_ind = i;
    }

    printf("%d %d\n", val1_ind + 1, val2_ind + 1);
    
    return(0);
}


/* for(int i = 0; i < N; i++) */
/*     printf("%d ", arr[i]); */
