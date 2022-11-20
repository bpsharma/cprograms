// Greatest Common Divisor (GCD) or Highest Common Factor (HFC) using Recursion
#include<stdio.h>
int gcd(int a,int b){
	if(a==b)
		return a;
	else if(a>b)
		return gcd(a-b,a);
	else
		return gcd(a,b-a);
}
void main(){
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("GCD of %d and %d is %d",a,b,gcd(a,b));
}
