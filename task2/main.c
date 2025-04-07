#include <stdio.h>

int* find(int *arr, int size, int value);

int main(){
	int size = 5;
	int arr[size] = {};
	int value = 0;
	scanf("%d", &value);
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}
	find(arr, size, value);
}
