main(){
	int ar[3][4],r,c;
	printf("Enter 12 numbers : ");
	for(r=0;r<3;r++){
		for(c=0;c<4;c++){
			scanf("%d",&ar[r][c]);
		}
	}
	
	printf("Array in matrix format is\n");
	for(r=0;r<3;r++){
		for(c=0;c<4;c++){
			printf("%d\t",ar[r][c]);
		}
		printf("\n");
	}
	
	printf("Transpose is\n");
	for(r=0;r<4;r++){
		for(c=0;c<3;c++){
			printf("%d\t",ar[c][r]);
		}
		printf("\n");
	}
}

