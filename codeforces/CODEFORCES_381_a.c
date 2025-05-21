#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n
    int ns[n], i = 0;
    do{
        scanf("%d",&ns[i++]);
    }while(getchar() != '\n');
    
    int s = 0, d = 0; 
    int l = 0, r = n-1; 
    for(i = 1; i <= n; ++i){
        int *ptr = (i%2 == 0) ? &d : &s;
        if(ns[l] < ns[r]){
            *ptr += ns[r--];
        }else{
            *ptr += ns[l++];
        }
    }
    printf("%d %d\n", s, d);

    return(0);
}
