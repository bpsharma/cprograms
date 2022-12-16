// Write a program to input a number and check it to be prime number
main(){
	int n,d=2,divided=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	if(n<1){
		printf("Sorry! Number must be a positive number");
		return;
	}
	
	if(n==1){
		printf("1 is neither prime nor composite");
		return;
	}
	
	while(d<n){
		if(n%d==0){
			divided=1;
			break;
		}
		d++;
	}
	if(divided)
		printf("%d is not a prime number",n);
	else
		printf("%d is a prime number",n);
}

