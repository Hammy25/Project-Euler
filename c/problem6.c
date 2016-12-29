#include<stdio.h>

int getSumOfSquares(int *);
int sqr(int);
int getSquareOfSum(int *);

void main(int argc, char *argv[]){
	int count, initial=1, numbers[100];
	for(count=0;initial<=100;count++,initial++){
		numbers[count]=initial;
		//printf("%d\n",numbers[count]);
	}
	int sumOS = getSumOfSquares(numbers);
	//printf("%d\n",sumOS);
	int squareOS = getSquareOfSum(numbers);
	int result = squareOS-sumOS;
	printf("%d\n",result);
}

int sqr(int a){
	int b = a*a;
	return b;
}

int getSumOfSquares(int *array){
	int count=0;
	int sum=0;
	int *pointer=array;
	for(count;count<=100;pointer++,count++){
	//	printf("%d\n",*array);
		sum = sum + sqr(*pointer);
	}
	return sum;
}

int getSquareOfSum(int *array){
	int count,sum=0;
	int *pointer = array;
	for(count=0;count<=100;pointer++,count++)
		sum = sum+*pointer;
	int total = sqr(sum);
	return total;
}
