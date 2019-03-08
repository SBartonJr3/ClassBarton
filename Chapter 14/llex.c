#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node *next;

}
Node, *NodePtr;

int main()
{
    void printlist(NodePtr);
    NodePtr makeNode(int);
    int n;
    NodePtr top, np, last;


    top = NULL;

    if (scanf("%d", &n) !=1) n = 0;
    while(n != 0)
    {
        np = makeNode(n); //create new node
        if(top == NULL) top = np; //set top as first node
        else last -> next = np; //set last
        last = np; //update last to new node
        if (scanf("%d", &n) !=1) n = 0;
    }
    printlist(top);

}


NodePtr makeNode(int n)
{
    NodePtr np =(NodePtr)malloc(sizeof(Node));
    np -> num = n;
    np -> next = NULL;
    return np;
    //making node
}

void printlist(NodePtr np)
{
    while(np != NULL) // long as node is present
    {
        printf("%d\n", np -> num);
        np = np -> next; //go next node
    }
}//end printList