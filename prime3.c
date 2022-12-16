// Write a program to ask the user how many prime numbers to be printed 
// and print that much of prime numbers

main(){
	int count,n=2,i=0,d,divided;
	printf("How many numbers to print : ");
	scanf("%d",&count);
	
	for(;;){
		d=2;
		divided=0;
		while(d<n){
			if(n%d==0){
				divided=1;
				break;
			}
			d++;
		}
		if(divided==0){
			printf("%d ",n);
			i++;
		}
		if(count==i){
			break;
		}
		n++;
	}
}
