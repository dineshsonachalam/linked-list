#include<stdio.h>
#include<conio.h>
typedef struct node
{
		int val;
		struct node *next;
}node_t;

//creating the node structure
//printing the elements in the linked list
void print_d(node_t *head)
{
	node_t *current = head ;//head =*current
	while(current!=NULL)
	{
		printf("%d\n",current->val);
		current=current->next;
	}
}
//adding an element at the end of the list
void push(node_t *head,int val)
{
	node_t *current=head;
	while(current->next!=NULL)
	{
		current=current->next;
	}
	//now we add a new variable
	current->next=malloc(sizeof(node_t));
	current->next->val=val;
	current->next->next=NULL;
}

int main(void)
{
	node_t *list=malloc(sizeof(node_t));
	list->val=1;
	list->next=malloc(sizeof(node_t));
	list->next->val=2;
	list->next->next=malloc(sizeof(node_t));
	list->next->next->val=3;
	list->next->next->next=NULL;
	push(list,4);
	print_d(list);
}


