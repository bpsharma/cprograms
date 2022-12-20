// m3[i][k]+=m1[i][j] X m2[j][k]
main(){
	int m1[3][4],m2[4][5],m3[3][5],i,j,k;
	printf("Enter 3x4 matrix : ");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter 4x5 matrix : ");
	for(j=0;j<4;j++){
		for(k=0;k<5;k++){
			scanf("%d",&m2[j][k]);
		}
	}	
	for(i=0;i<3;i++){
		for(k=0;k<5;k++){
			 m3[i][k]=0;
			for(j=0;j<4;j++){
				m3[i][k]+=m1[i][j]*m2[j][k];
			}
		}
	}	
	printf("Multiplication is : \n");
	for(i=0;i<3;i++){
		for(k=0;k<5;k++){
			printf("%d\t",m3[i][k]);
		}
		printf("\n");
	}
}

