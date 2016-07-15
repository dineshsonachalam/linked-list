
#include<stdio.h>
#include<conio.h>
typedef struct node
{
	int val;
	struct node *next;
}node_t;


void printlist(node_t *head)
{
	node_t *current = head; //&head value assigned to current
	while(current!=NULL)	
	{
		printf("%d\n",current->val);
		current = current->next;
	}
}

//adding an item at the end of the list
/*
void push(node_t *head,int val)
{		
		node_t *current=head;
		while(current->next!=NULL)
		{
			current=current->next;
		}
		//no we add a new variable
		current->next=malloc(sizeof(node_t));
		current->next->val=val;
		current->next->next=NULL;
}
*/
//adding an item at the beginning of the list
/*
void push_beg(node_t **head,int val)
{
	node_t *new_node=malloc(sizeof(node_t));
	new_node->val=val;
	new_node->next =*head;
	//new_node->next= **head;
	*head = new_node;
}
*/


int main(void)
{
	node_t *list = malloc(sizeof(node_t));
	list->val=1;
	list->next=malloc(sizeof(node_t));
	list->next->val=2;
	list->next->next=malloc(sizeof(node_t));
	list->next->next->val=3;
	list->next->next->next=malloc(sizeof(node_t));
	list->next->next->next->val=4;
	list->next->next->next->next=NULL;
	push_beg(list,10);
	push(list,5);//pushing a new element 
	//	pop(list);
	printlist(list);
	//del(list);		
}
