int preprocess(char *src, char *dest){
	int i;
	int j;
	for(i=0; i<strlen(src); i++)
		if(src[i] != ' ')
			dest[j++] = src[i];
	
	return j;
}
