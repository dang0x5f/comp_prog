#include <stdio.h>
#include <stddef.h>
#define SZ 50

void do_instruction(char *arr, char c, int *i)
{
    if(arr[*i] == c) ++(*i);
}

void read_input(char *arr, size_t *i)
{
    char c;
    while((c=getchar())!='\n')
        arr[(*i)++] = c;
} 

int main(void)
{
    size_t s_len = 0;
    char s[SZ] = {'\0'};
    read_input(s,&s_len);

    size_t t_len = 0;
    char t[SZ] = {'\0'};
    read_input(t,&t_len);

    int ins,pos;
    for(ins=0,pos=0; ins<t_len||ins<s_len; ++ins){
        do_instruction(s,t[ins],&pos);
    }
    printf("%d\n",pos+1);
    
    return(0);
}
