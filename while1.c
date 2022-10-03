/*
	Write a program to input a number and show table of that number.
	5 x 1 =5
	5 x 2 = 10
	…
	5 x 10=50
*/
#include<stdio.h>
main(){
	int n,counter;
	printf("Enter a number : ");
	scanf("%d",&n);
	counter=1; //initialization
	while(counter<=10){ // condition
		printf("%d x %d = %d\n",n,counter,n*counter);//statement
		counter++; // updation
	}
}

