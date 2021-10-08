#include "hash_tables.h"
/**
 * hash_table_create - ceates a hash table
 * @size: size of the hash table to create
 * Return: pointer to the newly created hash table, NULL if not successful
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table;

if (size == 0)
return (NULL);
hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
return (NULL);
hash_table->size = size;
 hash_table->array = calloc(size, sizeof(hash_node_t ));
if (hash_table->array == NULL)
return (NULL);
return (hash_table);
}
