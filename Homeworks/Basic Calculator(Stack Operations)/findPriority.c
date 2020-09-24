int findPriority(int sign){
	if((sign == '*') || (sign == '/')) return 2;
	if((sign == '+') || (sign == '-')) return 1;
	return 0;
}
