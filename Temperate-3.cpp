#include<stdio.h>

int main(){
	int n,num=0;
	
	printf("Enter num : ");
	scanf("%d",&n);
	
	 while(n!=0){  
       n=n/10; 
	   num++; 
}
	printf("\nThe number of digits in an integer is : %d",num);  
    return 0;  
	

}
