int numberOfDigits(char *str){
	int num = 0;
	while((*str >= '0') && (*str <= '9') && (*str != '\0')){
		num++;
		*str++;
	}
	return num;
}
