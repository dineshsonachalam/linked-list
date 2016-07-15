//print the element in the linked lis
//ip:1,2,3,4
//op:1,2,3,4
#include<stdio.h>
#include<conio.h>
typedef struct node
{
	int val;
	struct node *next; //struct stucturename *variablename
}node_t;
//creating a local variable points to the first element in the linked list
void print_list(node_t *head)
{
	node_t *current = head;	//head value to be the current
	while(current!=NULL)
	{
			printf("%d\n",current->val); 
			current = current->next;
	}
}
int main(void)
{
	node_t *test_list = malloc(sizeof(node_t));
	test_list->val=1;
	test_list->next=malloc(sizeof(node_t));
	test_list->next->val=2;
	test_list->next->next=malloc(sizeof(node_t));
	test_list->next->next->val=3;
	test_list->next->next->next=malloc(sizeof(node_t));
	test_list->next->next->next->val=4;
	test_list->next->next->next->next=NULL;
	print_list(test_list);
}
