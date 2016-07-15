#include<stdio.h>
typedef struct
{
	int val;
	struct node *next;
}node_t;
void print_list(node_t *head)
{
		node_t *current = head;
		while(current!=NULL)
		{
			printf("%d\n",current->val);
			current=current->next;
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
	test_list->next->next->next=NULL;
	print_list(test_list);
}
	
