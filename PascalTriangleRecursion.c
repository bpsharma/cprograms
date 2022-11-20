// Pascal Trianlge using Recursion
#include<stdio.h>
int pt(int r,int c){
	if(c==1 || r==c)
		return 1;
	else
		return pt(r-1,c)+pt(r-1,c-1);
}
void main(){
	int n,r,c;
	printf("Rows in Pascal Triangle ?");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++){
			printf("%d ",pt(r,c));
		}
		printf("\n");
	}
}
