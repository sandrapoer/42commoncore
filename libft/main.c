#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_atoi_tester(void)
{
	char*	ex1 = "1234";
	char*	ex2 = " -1234";
	char*	ex3 = " +1234";
	char*	ex4 = " --1234";

	printf("%d\n", ft_atoi(ex1));
	printf("%d\n", ft_atoi(ex2));
	printf("%d\n", ft_atoi(ex3));
	printf("%d\n", ft_atoi(ex4));
}

void ft_bzero_tester(void)
{
	int	s[5] = {1, 2, 3, 4};
	size_t	n = 3;

	ft_bzero(s, n);
}

void ft_calloc_tester(void)
{
	size_t nmemb = 5;
	size_t size = 4;
	int *arr = (int *)ft_calloc(nmemb, size);

	if (arr == NULL)
		return ;

	for (size_t i = 0; i < nmemb; i++)
		printf("%d ", arr[i]);
	printf("\n");
	free(arr);
}

void ft_isalnum_tester(void)
{
	int	ex1 = 1;
	int ex2 = 65;
	int ex3 = 13;

	printf("%d\n", ft_isalnum(ex1));
	printf("%d\n", ft_isalnum(ex2));
	printf("%d\n", ft_isalnum(ex3));
}

void ft_isalpha_tester(void)
{
	int	ex1 = 120;
	int ex2 = 0;
	int ex3 = 45;

	printf("%d\n", ft_isalpha(ex1));
	printf("%d\n", ft_isalpha(ex2));
	printf("%d\n", ft_isalpha(ex3));
}

void ft_isascii_tester(void)
{
	int	ex1 = -1;
	int ex2 = 0;
	int ex3 = 4454;

	printf("%d\n", ft_isascii(ex1));
	printf("%d\n", ft_isascii(ex2));
	printf("%d\n", ft_isascii(ex3));
}

void ft_isdigit_tester(void)
{
	int	ex1 = '1';
	int ex2 = '0';
	int ex3 = '4';

	printf("%d\n", ft_isdigit(ex1));
	printf("%d\n", ft_isdigit(ex2));
	printf("%d\n", ft_isdigit(ex3));
}

void ft_isprint_tester(void)
{
	int	ex1 = -1;
	int ex2 = 33;
	int ex3 = 4454;

	printf("%d\n", ft_isprint(ex1));
	printf("%d\n", ft_isprint(ex2));
	printf("%d\n", ft_isprint(ex3));
}

void ft_itoa_tester(void)
{
	int n = -1234500;
	char *result = ft_itoa(n);
	printf("%s\n", result);
	free(result);
}

void ft_memchr_tester(void)
{
	char str[20] = "Hello, World!";
	char character = 'o';
	size_t n = 10;

	printf("%s\n", (char*)ft_memchr(str, character, n));
}

void ft_memcmp_tester(void)
{
	char*	ex1 = "Hello";
	char*	ex2 = "hello";
	size_t n = 3;

	printf("%d\n", ft_memcmp(ex1, ex2, n));
}

void ft_memmove_tester(void)
{
	char	dest[10] = "Hello";
	char	src[10] = "World";
	size_t	n = 3;

	printf("%s\n", (char*)memmove(dest, src, n));
	printf("%s\n", (char *)ft_memmove(dest, src, n));
}

void ft_memset_tester(void)
{
	char	s[10] = "Hello";
	int	c = 35;
	size_t	n = 3;

	printf("%s\n", (char *)ft_memset(s, c, n));
}

void ft_split_tester(void)
{
	char *s = "This is a     testsentence !";
	char c = ' ';
	int i = 0;
	char **result = ft_split(s, c);
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}

void ft_strchr_tester(void)
{
	char str[20] = "Hello, World!";
	char character = 'W';

	printf("%s\n", ft_strchr(str, character));
}

void ft_strdup_tester(void)
{
	char*	ex1 = "Hello, World!";
	char*	ex2 = "";

	printf("%s\n", ft_strdup(ex1));
	printf("%s\n", ft_strdup(ex2));
	free(ft_strdup(ex1));
	free(ft_strdup(ex2));
}

void ft_strjoin_tester(void)
{
	char *s1 = "Hello, ";
	char *s2 = "World!";

	char *result = ft_strjoin(s1, s2);
	printf("%s\n", result);
}

void ft_strlcat_tester(void)
{
	char dst[10] = "Hello";
	char src[10] = "World";
	size_t dsize = 10;

	ft_strlcat(dst, src, dsize);
	printf("%s\n", dst);
}

void ft_strlcpy_tester(void)
{
	char dst[10] = "Hello";
	char src[10] = "World";
	size_t dsize = 10;

	ft_strlcpy(dst, src, dsize);
	printf("%s\n", dst);
}

void ft_strlen_tester(void)
{
	char*	ex1 = "1234";
	char*	ex2 = " ";
	char*	ex3 = "";

	printf("%lu\n", ft_strlen(ex1));
	printf("%lu\n", ft_strlen(ex2));
	printf("%lu\n", ft_strlen(ex3));
}

void ft_strncmp_tester(void)
{
	char*	ex1 = "Hello";
	char*	ex2 = "hello";
	unsigned int n = 3;

	printf("%d\n", ft_strncmp(ex1, ex2, n));
}

void ft_strnstr_tester(void)
{
	char*	ex1 = "Hello, World!";
	char*	ex2 = "World";
	size_t n = 100;

	printf("%s\n", ft_strnstr(ex1, ex2, n));
}

void ft_strrchr_tester(void)
{
	char str[20] = "Hello, World!";
	char character = 'o';

	printf("%s\n", ft_strrchr(str, character));
}

void ft_strtrim_tester(void)
{
	char* s1 = "aaabbbcccaaabbbcccdddeeefffdddaaa";
	char* set = "da";

	printf("%s\n", ft_strtrim(s1, set));
	free(ft_strtrim(s1, set));
}

void ft_substr_tester(void)
{
	char *s = "Hello, World!";
	unsigned int start = 7;
	size_t len = 3;

	char *substr = ft_substr(s, start, len);
	if (substr != NULL)
	{
		printf("%s\n", substr);
		free(substr);
	}
}

void ft_tolower_tester(void)
{
	int ex1 = '8';
	int ex2 = 'z';
	int ex3 = 'A';
	printf("%c\n", ft_tolower(ex1));
	printf("%c\n", ft_tolower(ex2));
	printf("%c\n", ft_tolower(ex3));
}

void ft_toupper_tester(void)
{
	int ex1 = 'a';
	int ex2 = 'z';
	int ex3 = 'A';
	printf("%c\n", ft_toupper(ex1));
	printf("%c\n", ft_toupper(ex2));
	printf("%c\n", ft_toupper(ex3));
}

void ft_memcpy_tester(void)
{
	char	dest[10] = "Hello";
	char	src[10] = "World";
	size_t	n = 3;

	printf("%s\n", (char *)ft_memcpy(dest, src, n));
	printf("%s\n", (char *)ft_memcpy(dest, src, 0));
	printf("%s\n", (char *)ft_memcpy(dest, src, 6));
}

char ft_strmapi_f(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

void ft_strmapi_tester(void)
{
	char	*ex1 = "hello world";
	char	*ex2 = "";
	char	*r1 = ft_strmapi(ex1, ft_strmapi_f);
	char	*r2 = ft_strmapi(ex2, ft_strmapi_f);

	printf("%s\n", r1);
	printf("[%s]\n", r2);
	free(r1);
	free(r2);
}

void ft_striteri_f(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
}

void ft_striteri_tester(void)
{
	char	ex1[] = "hello world";
	char	ex2[] = "";

	ft_striteri(ex1, ft_striteri_f);
	ft_striteri(ex2, ft_striteri_f);
	printf("%s\n", ex1);
	printf("[%s]\n", ex2);
}

void ft_putchar_fd_tester(void)
{
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('B', 2);
	ft_putchar_fd('\n', 2);
}

void ft_putstr_fd_tester(void)
{
	ft_putstr_fd("Hello, World!\n", 1);
	ft_putstr_fd("", 1);
	ft_putstr_fd("error\n", 2);
}

void ft_putendl_fd_tester(void)
{
	ft_putendl_fd("Hello", 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd("error", 2);
}

void ft_putnbr_fd_tester(void)
{
	int	ex1 = 0;
	int	ex2 = -42;
	int	ex3 = 2147483647;
	int	ex4 = -2147483648;

	ft_putnbr_fd(ex1, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ex2, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ex3, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ex4, 1);
	ft_putchar_fd('\n', 1);
}

void ft_lstnew_tester(void)
{
	t_list	*ex1 = ft_lstnew(ft_strdup("Hello"));
	t_list	*ex2 = ft_lstnew(NULL);

	printf("%s %p\n", (char *)ex1->content, (void *)ex1->next);
	printf("%p %p\n", ex2->content, (void *)ex2->next);
	ft_lstdelone(ex1, free);
	free(ex2);
}

void ft_lstadd_front_tester(void)
{
	t_list	*head = NULL;
	t_list	*ex1 = ft_lstnew(ft_strdup("b"));
	t_list	*ex2 = ft_lstnew(ft_strdup("a"));

	ft_lstadd_front(&head, ex1);
	ft_lstadd_front(&head, ex2);
	printf("%s %s\n", (char *)head->content, (char *)head->next->content);
	ft_lstclear(&head, free);
}

void ft_lstsize_tester(void)
{
	t_list	*ex1 = NULL;
	t_list	*ex2 = ft_lstnew(ft_strdup("a"));
	t_list	*ex3 = ft_lstnew(ft_strdup("b"));

	ex2->next = ex3;
	printf("%d\n", ft_lstsize(ex1));
	printf("%d\n", ft_lstsize(ex3));
	printf("%d\n", ft_lstsize(ex2));
	ft_lstclear(&ex2, free);
}

void ft_lstlast_tester(void)
{
	t_list	*ex1 = NULL;
	t_list	*ex2 = ft_lstnew(ft_strdup("a"));
	t_list	*ex3 = ft_lstnew(ft_strdup("b"));

	ex2->next = ex3;
	printf("%p\n", (void *)ft_lstlast(ex1));
	printf("%s\n", (char *)ft_lstlast(ex3)->content);
	printf("%s\n", (char *)ft_lstlast(ex2)->content);
	ft_lstclear(&ex2, free);
}

void ft_lstadd_back_tester(void)
{
	t_list	*head = NULL;
	t_list	*ex1 = ft_lstnew(ft_strdup("a"));
	t_list	*ex2 = ft_lstnew(ft_strdup("b"));

	ft_lstadd_back(&head, ex1);
	printf("%s\n", (char *)head->content);
	ft_lstadd_back(&head, ex2);
	printf("%s %s\n", (char *)head->content, (char *)head->next->content);
	ft_lstclear(&head, free);
}

void ft_lstdelone_tester(void)
{
	t_list	*ex1 = ft_lstnew(ft_strdup("delete me"));

	ft_lstdelone(ex1, free);
	printf("done\n");
}

void ft_lstclear_tester(void)
{
	t_list	*ex1 = ft_lstnew(ft_strdup("a"));
	t_list	*ex2 = ft_lstnew(ft_strdup("b"));
	t_list	*ex3 = NULL;

	ex1->next = ex2;
	ft_lstclear(&ex1, free);
	ft_lstclear(&ex3, free);
	printf("%p %p\n", (void *)ex1, (void *)ex3);
}

void ft_lstiter_f(void *content)
{
	printf("%s ", (char *)content);
}

void ft_lstiter_tester(void)
{
	t_list	*ex1 = ft_lstnew(ft_strdup("a"));
	t_list	*ex2 = ft_lstnew(ft_strdup("b"));
	t_list	*ex3 = NULL;

	ex1->next = ex2;
	ft_lstiter(ex1, ft_lstiter_f);
	ft_lstiter(ex3, ft_lstiter_f);
	printf("\n");
	ft_lstclear(&ex1, free);
}

void *ft_lstmap_f(void *content)
{
	return (ft_strdup((char *)content));
}

void ft_lstmap_tester(void)
{
	t_list	*ex1 = ft_lstnew(ft_strdup("a"));
	t_list	*ex2 = ft_lstnew(ft_strdup("b"));
	t_list	*ex3 = NULL;
	t_list	*r1;
	t_list	*r2;

	ex1->next = ex2;
	r1 = ft_lstmap(ex1, ft_lstmap_f, free);
	r2 = ft_lstmap(ex3, ft_lstmap_f, free);
	printf("%s %s\n", (char *)r1->content, (char *)r1->next->content);
	printf("%p\n", (void *)r2);
	printf("%d\n", r1 != ex1);
	ft_lstclear(&ex1, free);
	ft_lstclear(&r1, free);
}

int main(void)
{
	ft_atoi_tester();
	ft_bzero_tester();
	ft_calloc_tester();
	ft_isalnum_tester();
	ft_isalpha_tester();
	ft_isascii_tester();
	ft_isdigit_tester();
	ft_isprint_tester();
	ft_itoa_tester();
	ft_memchr_tester();
	ft_memcmp_tester();
	ft_memmove_tester();
	ft_memset_tester();
	ft_split_tester();
	ft_strchr_tester();
	ft_strdup_tester();
	ft_strjoin_tester();
	ft_strlcat_tester();
	ft_strlcpy_tester();
	ft_strlen_tester();
	ft_strncmp_tester();
	ft_strnstr_tester();
	ft_strrchr_tester();
	ft_strtrim_tester();
	ft_substr_tester();
	ft_tolower_tester();
	ft_toupper_tester();
	ft_memcpy_tester();
	ft_strmapi_tester();
	ft_striteri_tester();
	ft_putchar_fd_tester();
	ft_putstr_fd_tester();
	ft_putendl_fd_tester();
	ft_putnbr_fd_tester();
	ft_lstnew_tester();
	ft_lstadd_front_tester();
	ft_lstsize_tester();
	ft_lstlast_tester();
	ft_lstadd_back_tester();
	ft_lstdelone_tester();
	ft_lstclear_tester();
	ft_lstiter_tester();
	ft_lstmap_tester();
	return (0);
}