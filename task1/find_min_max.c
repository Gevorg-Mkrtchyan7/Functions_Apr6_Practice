#include "main.c"

void find_min_max(int *arr, const int size, int *min, int *max){
	for(int i = 1; i < size; ++i){
		if(*max < arr[i]){
			max = &arr[i];
		}
		if(*min > arr[i]){
			min = &arr[i];
		}
	}
	printf("%d \n", *min);
	printf("%d \n", *max);	
} 
