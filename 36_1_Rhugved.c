#include<stdio.h>

int fibo(int a,int b,int c);

void main(){
	
	int c,d,a = 0, b = 1;
	
	printf("Enter the no. of elements you want : ");
	scanf("%d",&c);
	
	if(c==1){
		printf("%d",a);
	}
	if(c==2){
	printf("%d %d",a,b);
	}
	printf("%d %d",a,b);  
	fibo(a,b,c); 
	
	
}


int fibo(int a,int b,int c){

	if(c==2){	
		return 0;
	}
	else{	
		printf(" %d",a+b);  
		return fibo(b,a+b,c-1);  
	}	
	
}