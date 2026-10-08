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

int main(void)
{
	ft_atoi_tester();
	ft_bzero_tester();
	ft_calloc_tester();
	ft_isalnum_tester();
	ft_isalpha_tester();
	return (0);
}
