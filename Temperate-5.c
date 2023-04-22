#include<stdio.h>

int main(){
	int i=1,N,fact;
	
	printf("Enter value : ");
	scanf("%d",&N);
	
	while(i<=N){
		fact *= i;
		i++;
		
	}
	printf("%d\n",fact);
	
	
	
	
	
	
	
	
	return 0;
}
