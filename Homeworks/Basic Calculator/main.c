#include "header.h"

int main()
{
	Node *numbers = NULL;
	Node *signs = NULL;

	char *test1 = "12 * (4 + 3 - 16 / 8) - 5";
	char *test2 = "8 + 2 * (21 / (7 - 4) + 2)";
	char *test3 = "5 + 3 * 10 / 6 - 2";
	char *test4 = "(12 + 4 - 3 ) * (7 * 2 + 5)";
	char *test5 = "21 / ((4 + 8 ) * 2 - 17)";

	printf("%s = %d\n", test1, operation(numbers, signs, test1));
	printf("%s = %d\n", test2, operation(numbers, signs, test2));
	printf("%s = %d\n", test3, operation(numbers, signs, test3));
	printf("%s = %d\n", test4, operation(numbers, signs, test4));
	printf("%s = %d\n", test5, operation(numbers, signs, test5));

	return 0;
}
