main(){
	int ar[10],i,n,found=0;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++)
		scanf("%d",&ar[i]);	
	printf("Enter the number to search : ");
	scanf("%d",&n);
	for(i=0;i<10;i++){
		if(ar[i]==n){
			found=1;
			break;
		}
	}
	if(found)
		printf("%d found",n);
	else
		printf("%d not found",n);
}

