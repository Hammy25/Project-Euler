#include<stdio.h>
#define LIMIT 1500000 //number of total integers
#define PRIMES 100000 //number of primes 

void main(){
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
	
	 //printing them
	 for(i=0;i<PRIMES;i++){
		 printf("%d\n",primes[i]);
		 }
}

