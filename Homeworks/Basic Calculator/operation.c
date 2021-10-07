int operation(Node *numbers, Node *signs, char *src)
{
	int i = 0;
	int num;
	int len;
	char str[MAX];

	len = preprocess(src, str);
	while (i < len)
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		{ //number
			num = convertNumber(&str[i], &i);
			push(&numbers, num);
		}
		else
		{
			if (str[i] == '(')
			{ //left bracklet
				push(&signs, (int)str[i]);
			}
			else if (str[i] == ')')
			{ //right bracklet
				while ((isEmpty(signs) != TRUE) && (signs->data != '('))
				{
					push(&numbers, signOperation(pop(&signs)->data, pop(&numbers)->data, pop(&numbers)->data));
				}
				pop(&signs);
			}
			else if ((findPriority((int)str[i]) > 0))
			{ //sign
				while ((isEmpty(signs) == FALSE) && ((signs->data != '(') && (findPriority((int)signs->data) >= findPriority((int)str[i]))))
				{
					push(&numbers, signOperation(pop(&signs)->data, pop(&numbers)->data, pop(&numbers)->data));
				}
				push(&signs, (int)str[i]);
			}
			i++;
		}
		/*
		print(numbers, TRUE);
		print(signs, FALSE);
		printf("\n");
		*/
	}

	while (isEmpty(signs) == FALSE)
	{
		/*
		print(numbers, TRUE);
		print(signs, FALSE);
		*/
		push(&numbers, signOperation(pop(&signs)->data, pop(&numbers)->data, pop(&numbers)->data));
	}
	return pop(&numbers)->data;
}
