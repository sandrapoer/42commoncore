#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_atoi_tester(void)
{
	char*	ex1 = "1234";
	char*	ex2 = " -1234";
	char*	ex3 = " +1234";
	char*	ex4 = " --1234";

	printf("ft_atoi output:\n");
	printf("ex1 \"1234\": %d\n", ft_atoi(ex1));
	printf("ex2 \" -1234\": %d\n", ft_atoi(ex2));
	printf("ex3 \" +1234\": %d\n", ft_atoi(ex3));
	printf("ex4 \" --1234\" (expect 0): %d\n", ft_atoi(ex4));
}

void ft_bzero_tester(void)
{
	int	s[5] = {1, 2, 3, 4};
	size_t	n = 3;

	printf("ft_bzero output:\n");
	printf("before: %d %d %d %d %d\n", s[0], s[1], s[2], s[3], s[4]);
	ft_bzero(s, n);
	printf("after n=3 bytes: %d %d %d %d %d\n", s[0], s[1], s[2], s[3], s[4]);
}

void ft_calloc_tester(void)
{
	size_t nmemb = 5;
	size_t size = 4;
	int *arr = (int *)ft_calloc(nmemb, size);

	printf("ft_calloc output (5 ints, expect all 0):\n");
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

	printf("ft_isalnum output:\n");
	printf("ex1 (1): %d\n", ft_isalnum(ex1));
	printf("ex2 (65 'A'): %d\n", ft_isalnum(ex2));
	printf("ex3 (13): %d\n", ft_isalnum(ex3));
}

void ft_isalpha_tester(void)
{
	int	ex1 = 120;
	int ex2 = 0;
	int ex3 = 45;

	printf("ft_isalpha output:\n");
	printf("ex1 (120 'x'): %d\n", ft_isalpha(ex1));
	printf("ex2 (0): %d\n", ft_isalpha(ex2));
	printf("ex3 (45 '-'): %d\n", ft_isalpha(ex3));
}

void ft_isascii_tester(void)
{
	int	ex1 = -1;
	int ex2 = 0;
	int ex3 = 4454;

	printf("ft_isascii output:\n");
	printf("ex1 (-1): %d\n", ft_isascii(ex1));
	printf("ex2 (0): %d\n", ft_isascii(ex2));
	printf("ex3 (4454): %d\n", ft_isascii(ex3));
}

void ft_isdigit_tester(void)
{
	int	ex1 = '1';
	int ex2 = '0';
	int ex3 = '4';

	printf("ft_isdigit output:\n");
	printf("ex1 ('1'): %d\n", ft_isdigit(ex1));
	printf("ex2 ('0'): %d\n", ft_isdigit(ex2));
	printf("ex3 ('4'): %d\n", ft_isdigit(ex3));
}

void ft_isprint_tester(void)
{
	int	ex1 = -1;
	int ex2 = 33;
	int ex3 = 4454;

	printf("ft_isprint output:\n");
	printf("ex1 (-1): %d\n", ft_isprint(ex1));
	printf("ex2 (33 '!'): %d\n", ft_isprint(ex2));
	printf("ex3 (4454): %d\n", ft_isprint(ex3));
}

void ft_itoa_tester(void)
{
	int n = -1234500;
	char *result = ft_itoa(n);

	printf("ft_itoa output (-1234500):\n");
	printf("%s\n", result);
	free(result);
}

void ft_memchr_tester(void)
{
	char str[20] = "Hello, World!";
	char character = 'o';
	size_t n = 10;

	printf("ft_memchr output (search 'o' in \"Hello, World!\", n=10):\n");
	printf("%s\n", (char*)ft_memchr(str, character, n));
}

void ft_memcmp_tester(void)
{
	char*	ex1 = "Hello";
	char*	ex2 = "hello";
	size_t n = 3;

	printf("ft_memcmp output (\"Hello\" vs \"hello\", n=3, expect < 0):\n");
	printf("%d\n", ft_memcmp(ex1, ex2, n));
}

void ft_memmove_tester(void)
{
	char	dest[10] = "Hello";
	char	src[10] = "World";
	size_t	n = 3;

	printf("ft_memmove output (copy 3 bytes of \"World\" into \"Hello\"):\n");
	printf("libc memmove: %s\n", (char*)memmove(dest, src, n));
	printf("ft_memmove:   %s\n", (char *)ft_memmove(dest, src, n));
}

void ft_memset_tester(void)
{
	char	s[10] = "Hello";
	int	c = 35;
	size_t	n = 3;

	printf("ft_memset output (fill 3 bytes of \"Hello\" with '#'):\n");
	printf("%s\n", (char *)ft_memset(s, c, n));
}

void ft_split_tester(void)
{
	char *s = "This is a     testsentence !";
	char c = ' ';
	int i = 0;
	char **result = ft_split(s, c);

	printf("ft_split output (split \"This is a     testsentence !\" at ' '):\n");
	while (result[i])
	{
		printf("word %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}

void ft_strchr_tester(void)
{
	char str[20] = "Hello, World!";
	char character = 'W';

	printf("ft_strchr output (search 'W' in \"Hello, World!\"):\n");
	printf("%s\n", ft_strchr(str, character));
}

void ft_strdup_tester(void)
{
	char*	ex1 = "Hello, World!";
	char*	ex2 = "";

	printf("ft_strdup output:\n");
	printf("ex1: %s\n", ft_strdup(ex1));
	printf("ex2 (empty): [%s]\n", ft_strdup(ex2));
	free(ft_strdup(ex1));
	free(ft_strdup(ex2));
}

void ft_strjoin_tester(void)
{
	char *s1 = "Hello, ";
	char *s2 = "World!";

	char *result = ft_strjoin(s1, s2);
	printf("ft_strjoin output (\"Hello, \" + \"World!\"):\n");
	printf("%s\n", result);
}

void ft_strlcat_tester(void)
{
	char dst[10] = "Hello";
	char src[10] = "World";
	size_t dsize = 10;

	printf("ft_strlcat output (\"Hello\" + \"World\", dsize=10, expect truncated):\n");
	ft_strlcat(dst, src, dsize);
	printf("%s\n", dst);
}

void ft_strlcpy_tester(void)
{
	char dst[10] = "Hello";
	char src[10] = "World";
	size_t dsize = 10;

	printf("ft_strlcpy output (copy \"World\" into dst, dsize=10):\n");
	ft_strlcpy(dst, src, dsize);
	printf("%s\n", dst);
}

void ft_strlen_tester(void)
{
	char*	ex1 = "1234";
	char*	ex2 = " ";
	char*	ex3 = "";

	printf("ft_strlen output:\n");
	printf("ex1 \"1234\": %lu\n", ft_strlen(ex1));
	printf("ex2 \" \": %lu\n", ft_strlen(ex2));
	printf("ex3 \"\": %lu\n", ft_strlen(ex3));
}

void ft_strncmp_tester(void)
{
	char*	ex1 = "Hello";
	char*	ex2 = "hello";
	unsigned int n = 3;

	printf("ft_strncmp output (\"Hello\" vs \"hello\", n=3, expect < 0):\n");
	printf("%d\n", ft_strncmp(ex1, ex2, n));
}

void ft_strnstr_tester(void)
{
	char*	ex1 = "Hello, World!";
	char*	ex2 = "World";
	size_t n = 100;

	printf("ft_strnstr output (search \"World\" in \"Hello, World!\", n=100):\n");
	printf("%s\n", ft_strnstr(ex1, ex2, n));
}

void ft_strrchr_tester(void)
{
	char str[20] = "Hello, World!";
	char character = 'o';

	printf("ft_strrchr output (last 'o' in \"Hello, World!\"):\n");
	printf("%s\n", ft_strrchr(str, character));
}

void ft_strtrim_tester(void)
{
	char* s1 = "aaabbbcccaaabbbcccdddeeefffdddaaa";
	char* set = "da";

	printf("ft_strtrim output (trim \"da\" from both ends):\n");
	printf("%s\n", ft_strtrim(s1, set));
	free(ft_strtrim(s1, set));
}

void ft_substr_tester(void)
{
	char *s = "Hello, World!";
	unsigned int start = 7;
	size_t len = 3;

	char *substr = ft_substr(s, start, len);
	printf("ft_substr output (start=7, len=3 of \"Hello, World!\"):\n");
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

	printf("ft_tolower output:\n");
	printf("ex1 ('8'): %c\n", ft_tolower(ex1));
	printf("ex2 ('z'): %c\n", ft_tolower(ex2));
	printf("ex3 ('A'): %c\n", ft_tolower(ex3));
}

void ft_toupper_tester(void)
{
	int ex1 = 'a';
	int ex2 = 'z';
	int ex3 = 'A';

	printf("ft_toupper output:\n");
	printf("ex1 ('a'): %c\n", ft_toupper(ex1));
	printf("ex2 ('z'): %c\n", ft_toupper(ex2));
	printf("ex3 ('A'): %c\n", ft_toupper(ex3));
}

void ft_memcpy_tester(void)
{
	char	dest[10] = "Hello";
	char	src[10] = "World";
	size_t	n = 3;

	printf("ft_memcpy output:\n");
	printf("n=3: %s\n", (char *)ft_memcpy(dest, src, n));
	printf("n=0 (unchanged): %s\n", (char *)ft_memcpy(dest, src, 0));
	printf("n=6 (whole \"World\"): %s\n", (char *)ft_memcpy(dest, src, 6));
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

	printf("ft_strmapi output (uppercase every even index):\n");
	printf("ex1 \"hello world\": %s\n", r1);
	printf("ex2 \"\": [%s]\n", r2);
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
	printf("ft_striteri output (uppercase every even index):\n");
	printf("ex1 \"hello world\": %s\n", ex1);
	printf("ex2 \"\": [%s]\n", ex2);
}

void ft_putchar_fd_tester(void)
{
	printf("ft_putchar_fd output (A on fd 1, B on fd 2):\n");
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('B', 2);
	ft_putchar_fd('\n', 2);
}

void ft_putstr_fd_tester(void)
{
	printf("ft_putstr_fd output (string on fd 1, empty string, string on fd 2):\n");
	ft_putstr_fd("Hello, World!\n", 1);
	ft_putstr_fd("", 1);
	ft_putstr_fd("error\n", 2);
}

void ft_putendl_fd_tester(void)
{
	printf("ft_putendl_fd output (line on fd 1, empty line, line on fd 2):\n");
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

	printf("ft_putnbr_fd output (0, -42, INT_MAX, INT_MIN):\n");
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

	printf("ft_lstnew output (content, next pointer):\n");
	printf("ex1: %s %p\n", (char *)ex1->content, (void *)ex1->next);
	printf("ex2 (NULL content): %p %p\n", ex2->content, (void *)ex2->next);
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
	printf("ft_lstadd_front output (add b, then a; expect a b):\n");
	printf("%s %s\n", (char *)head->content, (char *)head->next->content);
	ft_lstclear(&head, free);
}

void ft_lstsize_tester(void)
{
	t_list	*ex1 = NULL;
	t_list	*ex2 = ft_lstnew(ft_strdup("a"));
	t_list	*ex3 = ft_lstnew(ft_strdup("b"));

	ex2->next = ex3;
	printf("ft_lstsize output:\n");
	printf("empty list: %d\n", ft_lstsize(ex1));
	printf("one node: %d\n", ft_lstsize(ex3));
	printf("two nodes: %d\n", ft_lstsize(ex2));
	ft_lstclear(&ex2, free);
}

void ft_lstlast_tester(void)
{
	t_list	*ex1 = NULL;
	t_list	*ex2 = ft_lstnew(ft_strdup("a"));
	t_list	*ex3 = ft_lstnew(ft_strdup("b"));

	ex2->next = ex3;
	printf("ft_lstlast output:\n");
	printf("empty list (expect nil): %p\n", (void *)ft_lstlast(ex1));
	printf("one node (b): %s\n", (char *)ft_lstlast(ex3)->content);
	printf("two nodes (b): %s\n", (char *)ft_lstlast(ex2)->content);
	ft_lstclear(&ex2, free);
}

void ft_lstadd_back_tester(void)
{
	t_list	*head = NULL;
	t_list	*ex1 = ft_lstnew(ft_strdup("a"));
	t_list	*ex2 = ft_lstnew(ft_strdup("b"));

	printf("ft_lstadd_back output:\n");
	ft_lstadd_back(&head, ex1);
	printf("after adding a to empty list: %s\n", (char *)head->content);
	ft_lstadd_back(&head, ex2);
	printf("after adding b: %s %s\n", (char *)head->content, (char *)head->next->content);
	ft_lstclear(&head, free);
}

void ft_lstdelone_tester(void)
{
	t_list	*ex1 = ft_lstnew(ft_strdup("delete me"));

	printf("ft_lstdelone output (no crash = ok):\n");
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
	printf("ft_lstclear output (both heads must be nil):\n");
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
	printf("ft_lstiter output (print every content, empty list prints nothing):\n");
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
	printf("ft_lstmap output:\n");
	printf("new list contents: %s %s\n", (char *)r1->content, (char *)r1->next->content);
	printf("empty list result (expect nil): %p\n", (void *)r2);
	printf("new list is a different list (expect 1): %d\n", r1 != ex1);
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