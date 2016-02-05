#include<stdio.h>
int findFactors(int number);
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("\n %d \n",findPrimeFactors(n));
}
int findPrimeFactors(int number){
	int i=1;
	for(i;i<=number;i++){
		int divisor = 2;
		if(number%i == 0){
			for(divisor;divisor<=9;divisor++){
			if(number%divisor==0){
				printf("%d \n",number);
			}
			}
		}
	}
return i;
}
			
