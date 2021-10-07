int convertNumber(char *str, int *i)
{
	int num;
	int len = numberOfDigits(str);

	num = atoi(str);
	*i += len;
	return num;
}
