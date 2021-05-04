main(){
	int *ar[3]; // array of pointers to hold 3 address
	int d[]={4,5,6};
	int i,j;
	int r=sizeof(d)/sizeof(int);
	for(i=0;i<r;i++)
		ar[i]=(int *)malloc(d[i]*sizeof(int));
		
	for(i=0;i<r;i++){
		for(j=0;j<d[i];j++)
		{
			printf("Enter data in ar[%d][%d] : ",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
	printf("Array in matrix format is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<d[i];j++)
			printf("%d\t",ar[i][j]);
		printf("\n");
	}
}
