#include <stdio.h>

#define MAXSIZE 50

void solve(void)
{
  int n,a[MAXSIZE];
  scanf("%d",&n);
  for(int i=0; i<n; ++i)
    scanf("%d", &a[i]);
  if(a[0] == a[n-1]){
    printf("NO\n");
  }else{
    printf("YES\n");
    printf("%d ",a[n-1]);
    for(int i=0;i<n-1; ++i)
      printf("%d ", a[i]);
    printf("\n");
  }
}

int main(void)
{
  int t;
  scanf("%d",&t);
  while(t--)
    solve();
  
  return(0);
}
