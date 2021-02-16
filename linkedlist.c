#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}
  main()
{
    struct node *new_node,*current,*start=NULL;
    int i,n;
    printf("\nEnter the no of values \n");
    scanf("%d",&n);
    printf("Enter  values\n");
    for(i=1;i<=n;i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(start==NULL)
        {
            start=new_node;
            current=new_node;
        }
        else
        {
            current->next=new_node;
            current=new_node;
        }
    }
    printf("\n The linked list \n");
    for(current=start;current!=NULL;current=current->next)
    printf("%d-->",current->data);
    printf("NULL");
}