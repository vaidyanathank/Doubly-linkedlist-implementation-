#include <stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head,*tail;
void createNode(int a)
{
    if(head==NULL)
    {
        head=malloc(sizeof(struct node));
        head->data=a;
        head->next=NULL;
        head->prev=NULL;
        tail=head;
    }
    else
    {
        struct node *t=malloc(sizeof(struct node));
        t->data=a;
        t->prev=tail;
        t->next=NULL;
        tail->next=t;
        tail=t;
        
    }
    
}
void display(struct node *s){
    while(s!=0){
        printf("%d",s->data);
        s=s->next;
    }
    
}
void display2(struct node *s){
    while(s!=0){
        printf("%d",s->data);
        s=s->prev;
    }
    
}
int main()
{
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        createNode(a);
    }
    display(head);
    printf("\n");
    display2(tail);
    
}
