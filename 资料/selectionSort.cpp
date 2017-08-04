#include<iostream>

using namespace std;

void selectionSort(int arr[], int  n){
	//寻找[i,n)区间里的最小值
	for(int i = 0; i < n; i ++){
		int minIndex = i;
		for(int j = i + 1; j < n; j ++)
			if(arr[j] < arr[minIndex])
				minIndex = j;
			
		swap(arr[i], arr[minIndex]);	
	}
}

