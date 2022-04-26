#include "lists.h"

/**
 * free_listint2 - frees the list adn sets the head to NULL
 * @head: the head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while ((current = *head) != NULL)
	{
		head = head->next;
		free(current);
	}

	*head = NULL;
}
