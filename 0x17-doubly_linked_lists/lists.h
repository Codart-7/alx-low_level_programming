#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_d - doubly linked list
 * @n: data
 * @next: next node
 * @prev: previous node
 * Description: a complete doubly linked list
 */

typedef struct list_d
{
	int n;
	struct list_d *next;
	struct list_d *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

size_t dlistint_len(const dlistint_t *h);

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

void free_dlistint(dlistint_t *head);

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

int sum_dlistint(dlistint_t *head);

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif