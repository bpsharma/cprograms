main(){
	int ar[10],temp,i,j,n,found=0,start=0,end=9,mid;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++)
		scanf("%d",&ar[i]);
	
	printf("Enter number to search : ");
	scanf("%d",&n);
	
	//sorting of array in ascending order
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(ar[j]<ar[i]){
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
	
	while(start<=end){
		mid=(start+end)/2;
		if(ar[mid]==n){
			found=1;
			break;
		}else if(n<ar[mid]){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	
	if(found)
		printf("%d found",n);
	else
		printf("%d not found",n);
}

