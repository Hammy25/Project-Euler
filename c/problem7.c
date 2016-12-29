#include<stdio.h>
#include<stdlib.h>
#define LIMIT 1500000 //number of total integers
#define PRIMES 100000 //number of primes 

void main(int argc, char *argv[]){
	int i,j,numbers[LIMIT],primes[PRIMES];
	//populate an array with natural numbers
	for(i=0;i<LIMIT;i++) numbers[i] = i+2;

	//Sieving the non-prime numbers
	for(i=0;i<LIMIT;i++){
		if(numbers[i] != -1){
			for(j=2*numbers[i]-2;j<LIMIT;j+=numbers[i])numbers[j]=-1;
		}
	}
	
	//transfer the primes to their own array
	j=0;
	for(i=0;i<LIMIT&&j<PRIMES;i++){
		if(numbers[i] != -1){
			primes[j++] = numbers[i];
		}
	}
	int *pointer = primes;
	int position = strtol(argv[1],NULL,10);
	int index = position-1;
	printf("The %d prime number is: %d.\n",position,*(pointer+index));

}
