int bayerMooreHorshpool(char *str, int n, char *pat, int m){
	char alphabet[30];
	int alphsize = 30;
	int i, j;
	makeHorshpoolTable(pat, m, alphabet, alphsize);
	i = m-1;
	while(i < n){
		j=0;
		while((j<m) && (pat[m-j-1] == str[i-j])){
			j++;
		}
		
		if(j == m){
			return i-m+1;
		}
		else{
			i = i+alphabet[str[i]-'A'];
		}
	}
	return 0;
}
