#include "hash_tables.h"

/**
 * hash_table_create - ceates a hash table
 * @size: size of the hash table to create
 * Return: pointer to the newly created hash table, NULL if not successful
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int idx = 0;
hash_table_t *new_table = NULL;

new_table = malloc(sizeof(hash_table_t));
if (new_table == NULL)
return (NULL);
new_table->array = malloc(sizeof(hash_node_t *) * size);
if (new_table->array == NULL)
{
free(new_table);
new_table = NULL;
return (NULL);
}
while (idx < size)
{
new_table->array[idx] = NULL;
idx++;
}
new_table->size = size;
return (new_table);
}
