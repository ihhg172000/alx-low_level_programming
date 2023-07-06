#include "hash_tables.h"

/**
 * key_index - _
 * @key: _
 * @size: _
 *
 * Return: _
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
