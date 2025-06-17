#include <stdio.h>
#include <stdlib.h>

#define MAX_ITERATIONS (6)
#define NOT_FOUND (-69)

void read_input(char *str)
{
    int i=0, c;
    while( (c=getchar()) != '\n' ){
        *(str+i) = (char)c;
        ++i;
    }
    *(str+i) = '\0';
    /* printf("%s\n",str); */
}

char *append_string(char *str, int *len)
{
    int new_len = ((*len)*2);
    char *new_str = malloc(new_len+1);
    
    int i;
    for(i=0; i<new_len; ++i){
        *(new_str+i) = *(str+(i%*len));
    }
    *(new_str+i) = '\0';
    /* printf("%s\n",new_str); */
    
    free(str);

    *len = new_len;
    return(new_str);
}

int find(char *needle, int needle_len, char *haystack, int haystack_len)
{
    int pos = NOT_FOUND;
    if(needle_len>haystack_len) return(pos);
    
    int i, correct;
    for(i=0; i+needle_len<=haystack_len; ++i){
        correct=0;
        for(int j=0; j<needle_len; ++j){
            if(*(needle+j) == *(haystack+i+j)){
                ++correct;
            }else{
                break;
            }
        }
        if(correct == needle_len){
            pos = i;
            break;
        }
    }
    return(pos);
}

void solve(void)
{
    int n,m;
    scanf("%d %d",&n,&m)&&getchar();

    char *x = malloc((sizeof(char)*n)+1);
    read_input(x);
    char *s = malloc((sizeof(char)*m)+1);
    read_input(s);

    int cnt = -1;
    for(int i=0; i<MAX_ITERATIONS; ++i){
        if(find(s,m,x,n)!=NOT_FOUND){ cnt=i; break; }
        x = append_string(x,&n);
    }
    printf("%d\n",cnt);

    free(x);
    free(s);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
