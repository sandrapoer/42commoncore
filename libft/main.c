#include <stdio.h>

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
	return (0);
}