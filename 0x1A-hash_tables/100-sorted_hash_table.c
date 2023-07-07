#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table.
 * @size: the size of the array.
 *
 * Return: a pointer to hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;
	unsigned long int i;

	shash_table = malloc(sizeof(shash_table_t));

	if (!shash_table)
		return (NULL);

	shash_table->array = malloc(size * sizeof(shash_node_t *));

	if (!shash_table->array)
	{
		free(shash_table);
		return (NULL);
	}

	shash_table->size = size;
	shash_table->shead = NULL;
	shash_table->stail = NULL;

	for (i = 0; i < size; i++)
		shash_table->array[i] = NULL;

	return (shash_table);
}

/**
 * shash_table_set - adds an element to the sorted hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key.
 * @value:  is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new;
	unsigned int index;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	if (ht->array[index])
	{
		shash_node_t *temp = ht->array[index];

		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}

			temp = temp->next;
		}
	}

	new = malloc(sizeof(shash_node_t));

	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->snext = NULL;
	new->sprev = NULL;
	new->next = ht->array[index];
	ht->array[index] = new;

	sorted_insert(ht, new);

	return (1);
}

/**
* sorted_insert - _
* @ht: _
* @new: _
*/
void sorted_insert(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *temp;

	if (!ht->shead)
	{
		ht->shead = new;
		ht->stail = new;
		return;
	}

	if (strcmp(new->key, ht->shead->key) <= 0)
	{
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
		return;
	}

	if (strcmp(new->key, ht->stail->key) >= 0)
	{
		new->sprev = ht->stail;
		ht->stail->snext = new;
		ht->stail = new;
		return;
	}

	temp = ht->shead;

	while (temp->snext && strcmp(new->key, temp->snext->key) > 0)
		temp = temp->snext;

	new->snext = temp->snext;
	new->sprev = temp;
	temp->snext->sprev = new;
	temp->snext = new;
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: the sorted hash table.
 * @key: the key.
 *
 * Return:
 *	the value associated with the element,
 *	or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned int index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}

	return (NULL);
}

/**
* shash_table_print - _
* @ht: _
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = ht->shead;

	if (!ht)
		return;

	printf("{");

	while (temp)
	{

		printf("%s", temp->sprev ? ", " : "");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
	}

	printf("}\n");
}

/**
* shash_table_print_rev - _
* @ht: _
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = ht->stail;

	if (!ht)
		return;

	printf("{");

	while (temp)
	{

		printf("%s", temp->snext ? ", " : "");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table.
 * @ht: the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		shash_node_t *head = ht->array[i], *temp;

		while (head)
		{
			temp = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = temp;
		}
	}

	free(ht->array);
	free(ht);
}
