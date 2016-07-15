#include<stdio.h>
#include<conio.h>
typedef struct node
{
	int val;
	struct node *next;
}node_t;

void print_list(node_t *head)
{
	node_t *current=head;
	while(current!=NULL)
	{
		printf("%d\n",current->val);
		current=current->next;
	}
}
//for deleting an element
int pop(node_t **head)
{
	int retval=-1;
	node_t *next_node=NULL;
	if(*head==NULL)
	{
		return -1;
	}
	next_node=(*head)->next;
	retval=(*head)->val;
	free(*head);
	*head=next_node;
	return retval;
}
//removing by value
int remove_by_value(node_t **head,int val)
{
	node_t *previous,*current;
	if(*head==NULL)
	{
			return -1;
	}
	if((*head)->val==val)
	{
		return pop(head);
	}
	previous = current = (*head)->next;

	while(current)
	{
		if(current->val==val)
		{	
			previous->next=current->next;
			free(current);
			return val;
		}
		previous=current;
		current=current->next;
	}
	return -1;
}
void delete_list(node_t *head)
{
		node_t *current=head;
		node_t *next=head;
		while(current)
		{
				next=current->next;
				free(current);
				current=next;
		}
}
int main(void)
{
		node_t *test_list=malloc(sizeof(node_t));
		test_list->val=1;
		test_list->next=malloc(sizeof(node_t));
		test_list->next->val=2;
		test_list->next->next=malloc(sizeof(node_t));
		test_list->next->next->val=3;
		test_list->next->next->next=malloc(sizeof(node_t));
		test_list->next->next->next->val=4;
		test_list->next->next->next->next=NULL;
		remove_by_value(&test_list,3);
		print_list(test_list);
		delete_list(test_list);
		//return EXIT_SUCCESS;
		
	//	return EXIT_SUCCESS;
		return EXIT_SUCCESS;
}
