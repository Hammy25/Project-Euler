#include<stdio.h>

void main(){
	int totalSum = 0;
	int number = 1;
	for(number;number<1000;number++){
	int divisibleByThree = checkDivisibilityBy3(number);
	printf("Divisible By 3: %d \n",divisibleByThree);
	totalSum += divisibleByThree;
	if(divisibleByThree != checkDivisibilityBy5(number)){
	int divisibleByFive = checkDivisibilityBy5(number);
	printf("Divisible By 5: %d \n",divisibleByFive);
	totalSum += divisibleByFive;
	}
}
	printf("The sum of multiples of 3 and 5 between 0 and 1000 is %d \n",totalSum);
}

int checkDivisibilityBy3(int num){
	int a = 0;
	int sum = 0;
	a = num;
	while(a){
		int digit = a%10;
		a /= 10;
		sum += digit;
		//printf("%d \n",sum);
		}

	if(sum%3 == 0){
	return num;
	}else{
	return 0;
	}
}
int checkDivisibilityBy5(int num){
	int digit = num % 10;
	if(digit == 5 || digit == 0){
	return num;
	}else{
	return 0;
	}
}
