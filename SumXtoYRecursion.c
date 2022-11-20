// Sum of x to y using recusion
int sumxtoy(int x,int y){
	if(x==y)
		return y;
	else
		return x+sumxtoy(x+1,y);
}
void main(){
	printf("Sum of 1 to 10 is %d",sumxtoy(1,10));
}

