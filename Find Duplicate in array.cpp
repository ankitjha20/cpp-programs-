#include<iostream>
using namespace std ;

int duplicate(int arr[], int size){
	int ans = 0;
	for(int i = 0 ; i < size ; i++){
		ans = ans^arr[i];
	}
	
	for(int i = 1 ; i < size ; i++){
		ans = ans^i;
	}
	return ans ;
}

int main()
{
	int size; 
	cin >> size;
    int arr[10];
	for(int i = 0 ; i < size ; i++){
		cin >> arr[i];
	}
	for(int i = 0 ; i < size ; i++){
		cout << arr[i] <<" ";
	}	
	cout << endl;
	int ans = duplicate(arr , size);
	cout <<" Dupliacte element is :" << ans << endl;
}
