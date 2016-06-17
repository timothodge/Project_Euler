#include <stdio.h>
int main(){

	int i = 2;
	int j = 3;
	

	int sum = 2;

	int temp =5;

	while(temp <= 4000000){


		if (temp % 2 == 0){
			//printf("%d\n",temp);
			sum = sum + temp;
		}

		temp = i + j;

		i = j;
		j = temp;

	}
	printf("\n");
	printf("%d\n",sum);

	return sum;
}