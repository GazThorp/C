#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genRand(int, int);			//genRand() header declaration
void bubbleSort(int[], int); 		//bubbleSort() header declaration
void printArray(int[], int);		//printArray() header declaration
int binarySearch(int[], int, int);	//binarySearch() header declaration
int linearSearch(int[], int, int);	//linearSearch() header declaration

int main(void) {

    int arrLen = 10;
    int arr[arrLen];

    //fill array with random numbers
    for(int i = 0; i < length); i++) {
        arr[i] = genRand(1, 20);  
    }

    prinArray(arr, arrLen);

    return 0;
}



//genereate a random number between min and max
int genRand(int min, int max) {

    int n;
    srand(time(NULL));		//random seed using time()
    n = rand() % max + min;	//generate random number between min and max range	
    
    return n;

}


//print out our array to console
void printArray(int[] arr, int length) {

    for(int i = 0; i < arrSize; i++) {
        printf("%i | ", arr[i]);
    }

}


//sort an array using bubble sort - O(n2)
void bubbleSort(int[] arr, int length) {

    int tmp;
    for(int i = length - 1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(arr[i] > arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }

    }

}


int linearSearch(int[] arr, int length, int search) {

   
}


int binarySearch(int[] arr, int length, int search) {

   
}
