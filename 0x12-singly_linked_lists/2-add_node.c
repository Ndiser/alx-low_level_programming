#include "lists.h"
#include <stdib.h>
#include <string.h>
/**
 * add_node - add a new node at the beginning of a linked list
 * @head: double pointerto the llist_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new - > str = strup(str);
	new - > len = len;
	new - > next = (*head);
	(*head) = new;

	return (*head);
}
