#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))

int main(void)
{
  int N,a,min=1e5;
  scanf("%d",&N);

  do{
    scanf("%d",&a);
    min = MIN(min,ABS(a));
  }while(--N);
  printf("%d\n",min);
  
  return(0);
}
