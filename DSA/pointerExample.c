#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main(){
    struct Node *first, *second;
    first=(struct Node *)mallock(sizeof(struct Node));
    second =(struct Node *)mallock(sizeof(struct Node));
    first->data=10;
    second->data=20;

    first->next = second;
    second->next = NULL;
    printf("%d -> ", first->data);
    printf("%d -> NULL", first->next->data);

    free(first);
    free(second);
    return 0;
}