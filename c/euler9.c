#include<stdio.h>
#include<math.h>
#define SUM 1000
int square(int);
int main(){ 
	int array[48] = {3,4,5,5,12,13,8,15,17,7,24,25,20,21,29,12,35,37,9,40,41,28,45,53,11,60,61,33,56,65,16,63,65,48,55,73,36,77,85,13,84,85,39,80,89,65,72,97};
	int count=1,index;
	int sum=0,totalSum=0;
	for(index=0;index<48;index = index+3){
        	count=1;
		for(count;count<100;count=count+1){
			int a=array[index];
			int b=array[index+1];
			int c=array[index+2];
			a=a*count;
			b=b*count;
			c=c*count;
			sum=square(a)+square(b);
			totalSum=a+b+c;
			if(sum==square(c) && a+b+c==SUM){
				printf("base 1= %d, base 2=%d , base 3=%d\n",a/count,b/count,c/count);
				printf("a=%d,b=%d and c=%d\n",a,b,c);
				int product = a*b*c;
				printf("Product is %d. \n",product);
			}
		}
	}
return 0;
}
int square(int x){
	int y = x*x;
	return y;
}
