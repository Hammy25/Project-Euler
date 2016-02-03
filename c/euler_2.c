#include<stdio.h>
int fibonacciEven();
int main(){
	printf("The sum is: %d \n",fibonacciEven());
}
int fibonacciEven(){
	int counter = 0;
	int f1=1,f2=2,f3=0;
	int sum = 0;
	int position = 2;
        while(f3 <= 4000000){
			f3 = f1+f2;
			f1 = f2;
			f2 = f3;
			if(f3%2==0){
				printf("%d \n",f3);
				sum +=f3;
			}
			position++;
		}
	sum +=2;	
	return sum;
	}

			
