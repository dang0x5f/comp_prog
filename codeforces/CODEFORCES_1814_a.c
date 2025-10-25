#include <stdio.h>

void solve(void)
{
  int n,k;
  scanf("%d %d",&n,&k);

  printf("%s\n",((n & 1) && !(k & 1)?"NO":"YES"));
}

int main(void)
{
  int t;
  scanf("%d",&t);
  while(t--)
    solve();
  
  return(0);
}
