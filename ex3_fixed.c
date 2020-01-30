#include <stdio.h>
#include <stdlib.h>

#define NODES   100

// Globals
typedef struct node 
{
	int val;
	struct node* next;
} node;

// Protoypes
int TestEqual (const node* ptr1, const node* ptr2);


int main (int argc, char** argv) 
{
	int i;
	node nodes[NODES];

	for (i = 0; i < NODES; i++) 
        {
		nodes[i].val = 0;
		nodes[i].next = NULL;
	}

	nodes[0].next = &nodes[1];
	nodes[1].next = &nodes[2];
	nodes[2].next = &nodes[3];

	printf ("Test #1 = %d\n", TestEqual (&nodes[0], &nodes[0]));
	printf ("Test #2 = %d\n", TestEqual (&nodes[0], &nodes[2]));

	return 0;
}

int TestEqual (const node* ptr1, const node* ptr2) 
{
	while (ptr1 != NULL) 
        {
			if(ptr2 == NULL) {
				return 0;
			}
			if (ptr1->val != ptr2->val)
				return 0;
			ptr1 = ptr1->next;
			ptr2 = ptr2->next;
	}
	// lists are equal if ptr1 and ptr2 are both null pointers
	return ptr1 == ptr2;
}
