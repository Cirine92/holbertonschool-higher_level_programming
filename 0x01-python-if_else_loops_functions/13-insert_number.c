#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *insert_node - insert a new node in a sorted list
 *@head: pointer to pointer of the first node in the list
 *@number: number to be inserted in the right position in the list
 *Return: address of the new element or Null if it fails
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *current, *prev;

	current = *head;

	if (!*head || !number)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	prev = malloc(sizeof(listint_t));
	if (prev == NULL)
		return (NULL);

	new->n = number;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next)
		{
			if (current->n < number)
			{
				prev = current;
				current = current->next;
			}
			else
			{
				new->next = current;
				prev->next = new;
				break;
			}
		}
	}
	free(prev);
	return (new);
}
