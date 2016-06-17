#include <stdio.h>
#include <math.h>
int main(){

	long long int num = 600851475143; //prime 

	int maximum_possible_prime = floor(sqrt(600851475143/2));

	int prime = 0;
	
	int i;
	int j;
	int not_prime = 0;
//	printf("%d",maximum_possible_prime);
	for(i = 2; i < maximum_possible_prime+1; i++){


		if(num % i == 0){
			//printf("possible");
			for(j = 2; j <= i/2; j++){
				//printf("i is %d\n",i);
				if(i % j == 0){
				//	printf("Not prime %d\n",i);
					
					not_prime = 1;
					break;
				}
			}
		
			if(not_prime == 0){

				prime = i;
				
			}
		}


		not_prime = 0;



	}

	printf("%d\n",prime);

}