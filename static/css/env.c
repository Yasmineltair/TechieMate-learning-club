/*first i will print all env list
so i should have a struct for var input includes env
then searching in all list for my node(env)

*/
/* printing env list*/

/* prototyes
extern char **environ;
int env_list(input_t *input);
size_t print_list(const list_t *h);
void _puts(char *str);
int _putchar(char c);
char *get_env(input_t *input, char *name);
char *starts_with(const char *needle, const char *haystack);
int prepare_env_list(input_t *input);
#define BUF_FLUSH -1;
#define BUF_SIZE 1024;
list_t *add_node_end(list_t *head, const char *str);
char *_strdup(const char *str);


*/
#include <stdio.h>

int env_list(input_t *input)
{
    print_list(input->env);
    return (0);
}
/*printing list*/
size_t print_list(const list_t *h)
{
    size_t i = 0;
    while (h)
    {
        _puts(h->str ? h->str : "(nil)");
        _puts("\n");
        h = h->next;
        i++;
    }
    return (i);
}

/* printing string*/
void _puts(char *str)
{
    int i = 0;
    if (!str)
    return;
while (str[i] != '\0')
{
    _putchar(str[i]);
    i++;
}
}
/* printing char*/
int _putchar(char c)
{
    int i;
    char buf[BUF_SIZE];

    if (c == BUF_FLUSH || i >= BUF_SIZ)
    {
        write(1, buf, i);
    }
    if (c != BUF_FLUSH)
    buf[i++] = c;
return (1);
}

/* get node from env list*/

char *get_env(input_t *input, char *name)
{
listint_t *node = input->env;
char *p;

while (node)
{
    p = starts_with(node->str, name);
    if (p && *p)
        return (p);
    node = node->next;
}
return (NULL);
}

/* searching for the env starting with the name*/
char *starts_with(const char *needle, const char *haystack)
{
    while (*needle)
        if (*needle++ != haystack++)
            return (NULL);
return (char *haystack);
}

/* prepare env list*/
int prepare_env_list(input_t *input)
{
int i;
list_t *node =  NULL;
    for (i = 0; environ[i]; i++)
    add_node_end(&node, environ[i]);
input->env = node;
return (0);
}

/* add node_end */
list_t *add_node_end(list_t *head, const char *str)
{
    list_t *new_node = malloc(sizeof(list_t));
    list_t *node;

    if (!head || !new_node)
    return (NULL);
new_node->next = NULL;
if (str)
{
new_node->str = _strdup(str);
if (!new_node->str)
{
    free(new_node);
    return (NULL);
}
}
	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	return (new_node);
}

/* dupliacte string*/
char *_strdup(const char *str)
{
    int length;
    char s*;
    int i;

    if (str == NULL)
    return (NULL);
for (length = 0; str[length] != '\0'; length++)
;
s = malloc(sizeof(char) * (length + 1));
if (s == 0)
return (NULL);
else
{
for (i = 0; i < size; i++)
s[i] = str[i];
}
return (s);
}
