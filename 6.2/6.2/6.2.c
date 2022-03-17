#include <stdio.h>
//#include <assert.h>

#define TRUE 1
#define FALSE 0

int find_char(char **strings, int value)
{
	//assert(strings != NULL);
	char *string;

	while ((string = *strings++) != NULL)
	{
		while (*string != '\0')
		{
			if (*string++ == value)
				return TRUE;
		}
	}
	return FALSE;
}
int main()
{
	char **strings = ;
	printf("%d", find_char(strings, 1));

}