#include <stdio.h>
#include <stdlib.h>

#define SZ 1000000000

typedef struct{
    int data;
    struct Set_node *next;
}Set_node;

typedef struct{
    Set_node *first;
    size_t size;
}Set;

void append(Set *s, int data)
{
    Set_node *new_node = malloc(sizeof(Set_node));
    new_node->data = data;
    new_node->next = s->first;
    
    s->first = new_node;
    s->size += 1;
}

int in_set(Set *s, int data)
{
    int isfound = 0;
    Set_node *iter = s->first;
    while(iter){
        if(iter->data == data){
            isfound = 1;
            break;
        }
        iter = iter->next;
    }
    return(isfound);
}

void solve(void)
{
    int n, d;
    scanf("%d",&n)&&getchar();
    Set set = { .first=NULL, .size=0 };
    do{
        scanf("%d",&d);
        if(!(in_set(&set,d)))
            append(&set,d);
    }while(getchar()!='\n');
    printf("%zu\n",set.size);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
