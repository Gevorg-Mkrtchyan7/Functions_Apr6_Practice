#include "main.c"

int* find(int *arr, int size, int value){
	for(int i = 0; i < size; ++i){
		if(arr[i] == value){
			return &arr[i];
		}
	}
	return NULL;
}
