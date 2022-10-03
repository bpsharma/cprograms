/*
	Write a program to input a number and show sum of its digits.
*/
#include<stdio.h>
main(){
	int n,d,sum=0,counter=0;
	printf("Enter a number : ");scanf("%d",&n); //593
	while(n!=0){
		d=n%10;
		sum=sum+d;
		n=n/10;
		counter++;
	}
	printf("Number of digits are %d,Sum is %d",counter,sum);
}
