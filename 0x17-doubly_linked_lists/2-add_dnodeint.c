#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head pointer
 * @n: integer value of new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (!new_node == NULL)
return (NULL);
if (*head == NULL)
{
new_node->next = NULL;
new_node->prev = NULL;
new_node->n = n;
(*head) = new_node;
return (*head);
}
new_node->prev = NULL;
new_node->next = *head;
new_node->n = n;
(*head)->prev = new_node;
(*head) = new_node;
return (*head);
}
