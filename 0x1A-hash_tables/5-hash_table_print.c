#include "hash_tables.h"

/**
* hash_table_print - prints a hash table.
* @ht: the hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	bool print_comma = false;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *temp = ht->array[i];

		while (temp)
		{
			printf("%s", print_comma == true ? ", " : "");
			printf("'%s': '%s'", temp->key, temp->value);

			print_comma = true;

			temp = temp->next;
		}
	}

	printf("}\n");
}
