#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_list - frees a list
 * @head: a list that enters to the function
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		free(head->str);
		free(head);
		temp = head->next;
		head = temp;
	}
}
