/*
	Write a program to input a number and show table of that number till user 
	says Y or n when asked for more tables.
	5 x 1 =5
	5 x 2 = 10
	…
	5 x 10=50
*/
#include<stdio.h>
main(){
	int n,counter;
	char ch;
	do{
		printf("Enter a number : ");
		scanf("%d",&n);
		for(counter=1;counter<=10;counter++)
			printf("%d x %d = %d\n",n,counter,n*counter);
		printf("More tables [Y/N] ? ");
		fflush(stdin); //clear the keyboard (stdin) buffer 
		scanf("%c",&ch);
	}while(ch=='Y' || ch=='y');
}

