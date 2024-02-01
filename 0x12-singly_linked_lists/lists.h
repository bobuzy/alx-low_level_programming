#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct linked_lists - The singly linked list
 * @str: string - (malloc'ed string)
 * @len: The length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for alx project
 */

typedef struct linked_lists
{
	char *str;
	unsigned int len;
	struct linked_lists *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _strlen(const char *s);

#endif
