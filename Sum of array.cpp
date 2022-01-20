#include<iostream>
using namespace std ;

int arraySum(int arr[] , int size){
	int sum = 0;
	for(int i = 0; i < size ; i++){
		 sum = arr[i] + sum;
	}
	return sum;
}


int main(){
	int size;
	
	cout << "Enter the size of array:" << endl;
	cin >> size ;
	int arr[15];
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}
	
	cout << "The sum of array is :" << arraySum(arr , size) << endl;
}
