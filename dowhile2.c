main(){
	int choice;
	float num;
	do{
		printf("1: Square\n");
		printf("2: Square Root\n");
		printf("3: Cube\n");
		printf("4: Cube Root\n");
		printf("5: Exit\n");
		printf("Enter choice : ");
		scanf("%d",&choice);
		if(choice==1){
			printf("Enter the number : ");scanf("%f",&num);
			printf("Square is %f\n",num*num);
		}
		else if(choice==2){
			printf("Enter a number : ");scanf("%f",&num);
			printf("Square root is %f",sqrt(num));
		}
		else if(choice==3){
			
		}
		else if(choice==4){
			
		}
		
		
	}while(choice!=5);
}
