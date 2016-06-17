#include <stdio.h>
int main(){
	
	int i;
	int value = 0;

	for(i = 1; i <= 999; i++){

		if( (i % 5 == 0) || (i % 3 == 0) ) {
			value += i;
		}

	}

	printf("%d\n",value);

	return value;
}