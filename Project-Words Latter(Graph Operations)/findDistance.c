int findDistance(char *str1, char *str2){
	int i;
	int dist = 0;
	for(i=0; i<strlen(str1); i++){
		if(str1[i] != str2[i]){
			dist++;	
		}	
	}
	return dist;
}
