#include <stdio.h>

void main(){
	
	int i = 1;
	int sum = 0;
	
	while(i <= 5){
		sum = sum + i;
		i++;
	}
	printf("Sum = %d", sum);
}