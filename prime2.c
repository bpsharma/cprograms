// Write a program to input two numbers and print all prime numbers in given range
main(){
	int a,b,n,d,divided,temp;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	
	if(a<2) a=2;
	
	printf("Prime numbers are : ");
	for(n=a;n<=b;n++){
		d=2;
		divided=0;
		while(d<n){
			if(n%d==0){
				divided=1;
				break;
			}
			d++;
		}
		if(divided==0) printf("%d ",n);
	}
}
