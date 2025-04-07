#include <stdio.h>

void find_min_max(int *arr, const int size, int *min, int *max);

int main(){
	const int size = 5;
	int arr[size] = {};
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}
	int *max = &arr[0];
	int *min = &arr[0];
	find_min_max(arr, size, max, min);
}
