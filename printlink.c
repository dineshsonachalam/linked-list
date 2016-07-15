#include <stdio.h>
#include<conio.h>
typedef struct node //structure name node->points towards 'nodes'
{
	int val;
	struct node *next;
}node_t; //whereas we are creating 'node_t' to point next elements

//we only need the single pointer for head since we are not changing values in it

void print_list(node_t *head) //node_t point now ->head node starting of the linked list
{
	node_t *current=head; // &head assign towards current
	 //assigning the node head to current
	while(current!=NULL)
	{
		printf("%d\n",current->val); //we are printing node current ->holding value
		current=current->next;
	}
	
}
int main(void)
{
		node_t *list=malloc(sizeof(node_t)); //creating node list allocating memory to it
		list->val=10; //assign value to it
		list->next=malloc(sizeof(node_t));//dynamically allocate next node
		list->next->val=20;
		list->next->next=malloc(sizeof(node_t));
		list->next->next->val=30;
		list->next->next->next=malloc(sizeof(node_t));
		list->next->next->next->val=40;
		list->next->next->next->next=NULL;
		print_list(list);
		
		
}

