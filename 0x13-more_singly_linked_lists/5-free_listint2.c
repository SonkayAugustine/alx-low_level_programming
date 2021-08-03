#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 -frees a list_t list.
 * @head: Double pointer to the actual position of the linked list (struct)
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
if (*head == NULL)
return;
while (*head)
{
free(*head);
*head = (*head)->next;
}
*head = NULL;
}
