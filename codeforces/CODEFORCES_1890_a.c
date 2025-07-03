#include <stdio.h>
#include <stdlib.h>

#define ABS(x) ((x)<0?-(x):(x))

typedef struct {
    int data;
    int count;
    struct List_Item *next;
} List_Item;

typedef struct {
    List_Item *first;
    size_t size;
} List_Head;

int check_list(List_Head *lh, int data)
{
    int exists = 0;
    List_Item *iter = lh->first;
    while(iter){
        if(iter->data == data){
            iter->count += 1;
            exists = 1;
            break;
        }
        iter = iter->next;
    } 
    return(exists);
}

void append(List_Head *lh, int data)
{
    if(check_list(lh,data)) return;

    if(lh->size>=3) return;

    List_Item *new_item = malloc(sizeof(List_Item));
    new_item->data = data;
    new_item->count = 1;
    new_item->next = lh->first;
    
    lh->first = new_item;
    lh->size += 1;
}

void solve(void)
{
    int n,d;
    scanf("%d",&n)&&getchar();
    List_Head lh = { .first=NULL, .size=0 };
    
    do{
        scanf("%d",&d);
        append(&lh,d);
    }while(getchar()!='\n');

    if(lh.size==1){
        printf("Yes\n");
        return;
    }else if(lh.size==2){
        List_Item *i1 = lh.first;
        List_Item *i2 = i1->next;
        if(ABS(i1->count - i2->count) <= 1){
            printf("Yes\n");
            return;
        }
    }
    printf("No\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
