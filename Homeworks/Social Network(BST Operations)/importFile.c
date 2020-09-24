int importFile(Node **root, char *fname){
	FILE *fp = fopen(fname, "r");
	int id;
	int numOfFriends;
	char *substr;
	char line[MAXSIZE];
	char name[MAXSIZE];
	
	if(fp == NULL){
		printf("File could not be opened!\n");
		return ERROR;
	}
	
	while(fgets(line, MAXSIZE, fp)){
		substr = strtok(line, ",");
		if(substr != NULL){
			id = atoi(substr);
			substr = strtok(NULL, ",");
			
			if(substr != NULL){
				strcpy(name, substr);
				substr = strtok(NULL, ",");
				
				if(substr != NULL){
					numOfFriends = numberOfFriends(substr);
					*root = insertNewUser(*root, id, name, numOfFriends, substr);
				}
			}
		}
	}
	fclose(fp);
	return 0;
}
