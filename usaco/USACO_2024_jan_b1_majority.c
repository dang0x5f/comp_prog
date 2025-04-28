#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int value;
    struct node *next;
} node;

typedef struct list {
    int len;
    struct node *head;
} list;
void solve(void);

int
main(void)
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
       solve(); 

    return(0);
}

void 
solve(void)
{
    int n;
    scanf("%d", &n);

    int fg[n];
    for(int j = 0; j < n; j++) 
        scanf("%d", &fg[j]);

    int possibilities[n];
    memset(possibilities, 0, sizeof(possibilities));
    
    for(int i = 0; i < n-1; i++){
        if(fg[i] == fg[i + 1])
            possibilities[fg[i] - 1] = 1;
        if(i < n -2 && fg[i] == fg[i + 2]) 
            possibilities[fg[i] - 1] = 1;
    }

    list *valid = malloc(sizeof(list));
    valid->len  = 0;
    valid->head = NULL;

    for(int i = 0; i < n; i++){
        if(possibilities[i] == 1){
            
            node *temp = malloc(sizeof(node));
            temp->value = i+1;
            temp->next  = NULL;

            if(valid->head == NULL){
                valid->head = temp;
            }else{
                node *iter = valid->head;
                while(iter->next)
                    iter = iter->next;

                iter->next = temp;
            }

            (valid->len)++;

        }
    }

    if(valid->len == 0){
        printf("-1\n");
    }else{
        node *iter = valid->head;
        while(iter->next){
            printf("%d ", iter->value);
            iter = iter->next;
        }
        printf("%d\n", iter->value);
            
    }
    

}
