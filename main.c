#include <stdio.h>
#include <stdlib.h>

struct list {
	int val;
	struct list *next;
};

int main(void)
{
	struct list list[10], *head, *it;
	size_t i;

	head = &list[0];
	for (i = 0; i < 9; ++i) {
		list[i].next = &list[i+1];
		list[i].val = i;
	}
	list[9].val = 9;
	list[9].next = NULL;

	for (it = head; it; it = it->next)
		printf("%d\n", it->val);

	return EXIT_SUCCESS;
}
