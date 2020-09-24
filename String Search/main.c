#include "header.h"

int main(){
	char *str = {"ABRACADABRA\0"};
	char *pat = {"ADAB\0"};
	int n = strlen(str);
	int m = strlen(pat);
	
	int result = basicSearch(str, n, pat, m);
	printf("%s\n", &str[result]);
	
	result = bayerMooreHorshpool(str, n, pat, m);
	printf("%s ", &str[result]);
	
	return 0;
}
