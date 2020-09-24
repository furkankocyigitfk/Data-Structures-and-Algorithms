int basicSearch(char *str, int n, char *pat, int m){
	int i, j;
	
	for(i=0; i<n-m; i++){
		j = 0;
		while((j<m) && (str[i+j] == pat[j])){
			j++;
		}
		if(j == m){
			return i;
		}
	}
	return 0;
}
