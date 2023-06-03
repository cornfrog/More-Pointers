#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 5

void setArray(int*);
void printArray(int*);
void freeArray(int**);

int main(){
	srand(time(NULL));
	//allocating memory for 5 ints 
	int* testArray = (int*)malloc(ARR_SIZE * sizeof(int));
	if(testArray == NULL){
		printf("Error: Memory Allocation Failed!\n");
		return 1;
	}
	setArray(testArray);
	printArray(testArray);
	freeArray(&testArray);
	if(testArray == NULL){
		printf("testArray freed\n");
	}
	else{
		printf("testArray NOT freed\n");
	}
	return 0;
}

void setArray(int* arr){
	for(int i =0; i < ARR_SIZE; i++){
		int randNum = (rand() % 10) + i; 
		arr[i] = randNum;
	}
}

void printArray(int* arr){
	for(int i = 0; i < ARR_SIZE; i++){
		printf("%d\n", *arr+i);
	}
}

void freeArray(int** arr){
	free(*arr);
	*arr = NULL;
}
