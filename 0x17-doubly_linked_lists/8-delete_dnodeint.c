#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: pointer to head pointer
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp;
unsigned int i;
i = 0;
tmp = *head;
while (tmp)
{
if (index == 0)
{
*head = tmp->next;
if (tmp->next != NULL)
(tmp->next)->prev = NULL;
free(tmp);
return (1);
}
if (tmp->next = NULL)
{
(tmp->prev)->next = NULL;
}
else
{
(tmp->prev)->next = tmp->next;
(tmp->next)->prev = tmp->prev;
}
free(tmp);
return (1);
}
