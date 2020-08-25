#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	struct NODE *next;
	int data;
};


void addFirst(struct NODE *target, int data)
{
	struct NODE *newNode = malloc(sizeof(struct NODE));
	newNode->next = target->next;
	newNode->data = data;

	target->next = newNode;// change the value with pointer
}

void removeFirst(struct NODE *target)
{
	struct NODE *removeNode = target->next;//delete target next node
	target->next = removeNode->next; // disconnet with remove node and connet to remove next node
	free(removeNode);
}

int main()
{
	struct NODE *head = malloc(sizeof(struct NODE));

	head->next = NULL;

	addFirst(head, 10);
	addFirst(head, 20);
	addFirst(head, 30);

	removeFirst(head);

	struct NODE	*curr = head->next; // start i = 1
	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	curr = head->next; // free each node, didn't save any node pointer except head
	while (curr != NULL)
	{
		struct NODE *next = curr->next;//don't free curr first, it keeps you from access
		free(curr);
		curr = next;
	}

	free(head); // head has it's own pointer variable
}
