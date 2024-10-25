#include "libft.h"
#include<stdio.h>
#include <string.h>

// char f(unsigned int n, char c)
// {
//     if (c >= 'a' && c <= 'z' && n > 0)
//         return (c - 32);
//     return c;
// }

void f(unsigned int n,char *s)
{
  int i;

    i=0;
    while (s[i])
    {
        write(n,&s[i],1);
        i++;
    }
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}
int main ()
{
    // char s1[]= "4nihal34";
    // char s2[]= "4";


    // Step 1: Create initial nodes and link them
    t_list *head = ft_lstnew("First");
    if (!head)
    {
        printf("Memory allocation failed for head.\n");
        return 1;
    }
    
    t_list *second = ft_lstnew("Second");
    if (!second)
    {
        printf("Memory allocation failed for second.\n");
        free(head);
        return 1;
    }
    
    t_list *third = ft_lstnew("Third");
    if (!third)
    {
        printf("Memory allocation failed for third.\n");
        free(second);
        free(head);
        return 1;
    }

    // Link the nodes: head -> second -> third
    head->next = second;
    second->next = third;

    // Step 2: Test ft_lstlast
    t_list *last = ft_lstlast(head);
    if (last)
        printf("Last node content: %s\n", (char *)last->content);
    else
        printf("List is empty.\n");

    // Step 3: Test ft_lstadd_front
    t_list *new_head = ft_lstnew("New First");
    if (!new_head)
    {
        printf("Memory allocation failed for new_head.\n");
        // Free previously allocated nodes
        free(third);
        free(second);
        free(head);
        return 1;
    }

    ft_lstadd_front(&head, new_head);

    // Step 4: Print the updated list
    printf("Updated list after adding to the front:\n");
    t_list *current = head;
    while (current)
    {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");

    // Step 5: Free all nodes
    current = head;
    t_list *temp;
    while (current)
    {
        temp = current;
        current = current->next;
        free(temp);
    } 
    //ft_striteri(s1,f);
    //int *s3=ft_calloc(6,4);
    //printf("%s\n",s3);
  // printf("%s\n",ft_itoa(23));
//printf("%d\n",atoi("-25"));
//  char s[] = "hello world welcome to 42";
//     char **result;
//     int i = 0;

//     result = ft_split(s, ' ');
//     while (result[i])
//     {
//         printf("%s\n", result[i]);
//         i++;
//     }
    //int s=0;
// ft_memset(&s,0,4);
// ft_memset(&s,5,2);
// ft_memset(&s,57,1);
// printf("%d\n",s);
        
}