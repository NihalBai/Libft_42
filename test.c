#include "libft.h"
#include<stdio.h>
#include <stdint.h>
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
void del(void *content) {
    free(content); // Free the allocated memory for content
}

// void test_ft_calloc(size_t count, size_t size)
// {
//     size_t	t;

// 	t = count * size;
//    printf("t ; %d\n t/count %d\n  size %d \n",t,t / count,size);
//     void *ptr = ft_calloc(count, size);
//     if (ptr == NULL)
//     {
//         printf("ft_calloc(%zu, %zu) returned NULL (expected due to overflow or invalid input)\n", count, size);
//     }
//     else
//     {
//         printf("ft_calloc(%zu, %zu) returned a pointer (unexpected behavior)\n", count, size);
//         free(ptr); // Free the allocated memory
//     }
// }
#include <limits.h>

int main ()
{
//      char s1[] = "4nihal34";
//     char s2[] = "4";
//     char s0[] = "first";
    
//     // Create the initial list with one node
//     t_list *node = ft_lstnew(s1);
//     if (!node) {
//         printf("Failed to create the initial node.\n");
//         return (1);
//     }
    
//     printf("Node content: %s\n", (char *)node->content);
//     if (node->next == NULL)
//         printf("Node next pointer is NULL as expected.\n");
    
//     // Check initial list size
//     int c = ft_lstsize(node);
//     printf("List size before additions: %d\n", c);
    
//     // Create new nodes
//     t_list *new = ft_lstnew(s2);
//     t_list *new1 = ft_lstnew(s0);
    
//     // Ensure new nodes are created
//     if (!new || !new1) {
//         printf("Failed to create new nodes.\n");
//         free(node->content); // Free the original node content
//         free(node); // Free the original node
//         return (1);
//     }
    
//     // Add nodes to the list
//     ft_lstadd_back(&node, new);
//     ft_lstadd_front(&node, new1);
    
//     // Print the list contents
//     printf("List contents after additions:\n");
//     print_list(node);
    
//    // Test ft_lstdelone by deleting the first node (the one containing "first")
//     t_list *node_to_delete = node; // This is the node with content "first"

//     if (node_to_delete) { // Ensure the node to delete is valid
//         printf("Deleting node with content: %s\n", (char *)node_to_delete->content);
//         node = node->next; // Move head pointer to next node
//         ft_lstdelone(node_to_delete, del); // Delete this node
//     } else {
//         printf("Node to delete is NULL.\n");
//     }

//     // Print the list contents after deletion
//     printf("List contents after deletion:\n");
//     print_list(node);
    
//     // Freeing the remaining nodes
//     t_list *temp;
//     while (node) {
//         temp = node->next;
//         free(node->content); // Free the content
//         free(node);          // Free the node itself
//         node = temp;
//     }

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
// char s[] = "220000000000000000000000000000000";

// printf("%d\n",ft_atoi(s));

// size_t count1 =  SIZE_MAX; // Maximum size_t value
//     size_t size1 = 2;         // A small size
//     test_ft_calloc(count1, size1); // Expect NULL due to overflow

    
//     size_t count3 = 1; // Valid count
//     size_t size3 =  SIZE_MAX; // Large size that could cause overflow
//     test_ft_calloc(count3, size3); // Expect NULL due to overflow
// printf("INT_MIN: %s\n", ft_itoa(INT_MIN)); // Expected: "-2147483648"
//     printf("0: %s\n", ft_itoa(0));               // Expected: "0"
//     printf("123: %s\n", ft_itoa(123));           // Expected: "123"
//     printf("INT_MAX: %s\n", ft_itoa(INT_MAX));
// const char *str = "Hello, World!";
//     int  ch = 'o';
//     char *result;

//     // Using ft_memchr to find character 'o'
//     result = ft_memchr(str, ch, strlen(str));

//     if (result) {
//         printf("Character '%c' result: %s\n", ch, result);
//     } else 
//         printf("Character '%c' not found.\n", ch);
// char src[] = "Hello, World!";
//     char dest[20];

//     ft_memcpy(dest, src, strlen(src) + 1); // +1 to include the null terminator

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);
//  char str[] = "Hello, World!";
//     printf("Before: %s\n", str); // Output: Before: Hello, World!
//     ft_memmove(str + 3, str + 7, 6); // Move "World" into "Hello"
//     printf("After: %s\n", str);


}
