#include<stdio.h>

int main(){
	int num,sum=0,firstdigit, lastdigit;
	
	printf("Enter num : ");
	scanf("%d",&num);
	
	/* Find last digit to sum */
    lastdigit = num % 10;
    

    /* Copy num to first digit */
    firstdigit = num;
    
    /* Find the first digit by dividing num by 10 until first digit is left */
    while(num >= 10)
    {
        num = num / 10;
    }
    firstdigit = num;


    /* Find sum of first and last digit*/
    sum = firstdigit + lastdigit; 

    printf("Sum of first and last digit = %d", sum);
	
	
	
	
	
	
	
	return 0;
}
