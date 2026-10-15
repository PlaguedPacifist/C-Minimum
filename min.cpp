// Richard Nick S. Del Rosario
#include <stdio.h>

int min(int x[50], int arraysize){
	int i = 0;
	int min = x[0];
	//(i = 0; i < arraysize; i++)
	
	while (i < arraysize) {
		if (min > x[i]){
			min = x[i];
			i++;
		}
		else{
			i++;
		}
	}
	if (i >= arraysize){
		return(min);
	}
}

int main(){
	int i,size, x[50];
	printf("Input the total amount of numbers to input\n");
	
	scanf("%d", &size);
	for (i = 0; i<size; i++){
		printf("Input numbers to find the lowest\n");
		scanf("%d", &x[i]);
	}
	
	printf("The lowest number in the list is %d", min(x, size));
	
	return(0);
}
