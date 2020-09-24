int isPrime(int X){
	int i;
	if((X==0)||(X==1)) return 0;
	for(i=2;i*i<=X;i++){
		if(X % i == 0)
			return 0;
	}
	return 1;
}
