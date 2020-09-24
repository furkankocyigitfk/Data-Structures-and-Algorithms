void makeHorshpoolTable(char *pat, int m, char *table, int alphsize){
	int i;
	for(i=0; i<alphsize; i++){
		table[i] = m;
	}
	for(i=0; i<m; i++){
		table[pat[i]-'A'] = m-i-1;
	}
}
