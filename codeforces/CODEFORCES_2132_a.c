#include <stdio.h>

#define LEN (10+1)

void reverse(char arr[], int size)
{
    char temp;
    int i=0, j=size-1;
    if(j<i) return;
    for(; i<j; ++i,--j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void readstr(char arr[], int size)
{
    for(int i=0; i<size; ++i)
        arr[i] = getchar();
    getchar();
}

void solve(void)
{
    char a[LEN]={0}, b[LEN]={0}, c[LEN]={0};
    int n, m;

    scanf("%d",&n)&&getchar();
    readstr(a,n);

    scanf("%d",&m)&&getchar();
    readstr(b,m);
    readstr(c,m);

    char left[LEN]={0}, right[LEN]={0};
    int li=0, ri=0;
    for(int i=0; i<m; ++i){
        if(c[i] == 'V'){
            left[li] = b[i];
            ++li;
        }else{
            right[ri] = b[i];
            ++ri;
        }
    }
    reverse(left,li);
    printf("%s%s%s\n",left,a,right);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();
    
    return(0);
}
