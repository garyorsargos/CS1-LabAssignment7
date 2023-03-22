/*
Gary Orsargos
03/22/2023
Submission for "Lab Assignment 7"
*/
#include <stdio.h>

void bubbleSortWithCount(int* pData, int n)
{
	int temp, passSwaps, passes = 1;
	while(passes < n){
		passSwaps = 0;
		for(int i = 0; i < n-1; i++){
			if(pData[i]>pData[i+1]){
				temp = pData[i];
				pData[i] = pData[i+1];
				pData[i+1] = temp;
                passSwaps++;
			}
		}
        printf("Pass #%d: %d\n", passes, passSwaps);
        passes++;
	}
}

int main(){
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int size = 9;
    bubbleSortWithCount(arr, size);
}