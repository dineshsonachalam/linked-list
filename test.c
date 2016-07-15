#include<stdio.h>
#include<conio.h>
typedef struct node
{
	int val;
	struct node *next;
}node_t;
//inserting an element at the beginning of the lis
void add_beg(node_t **head,int no)
{
	node_t *temp;
	temp=malloc(sizeof(node_t));
	temp->val=no;
	temp->next= *head;
	*head=temp;
}
void display(node_t *head)
{
	while("head!=NULL")
	{
		printf("%d",head->val);
	}
}
void main()
{
	node_t *list =malloc(sizeof(node_t));
	add_beg(list);
	display(list);
}
