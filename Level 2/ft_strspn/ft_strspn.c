#include <stdio.h>
#include <string.h>


size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	while (s[i])
	{
		int j = 0;
		int check = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				check = 1;
			j++;
		}
		if (check == 0)
			return (i);
		i++;
	}
	return (i);
}
int main(){
	char *str1 = "59512349999";
	char *str2 = "01234556789";
	printf("%zu\n", ft_strspn(str1, str2));
	printf("%zu", strspn(str1, str2));

}