//Linear Search in array

#include<iostream>
using namespace std ;

bool linearSearch(int arr[] , int size , int key){
	for(int i = 0; i < size ; i++){
		if(arr[i] == key){
			return 1 ;
		}
	}
	return 0;
}
int main (){
	int arr[10] = { 1 ,4 , -9 , 45 , 8, -6 , 23 , 47 , 28 , 11};
	
	int key;
	cout << "Enter the Element to search for :" << endl ;
	cin >> key;
	
	bool found = linearSearch(arr , 10 , key);
	if(found){
		cout <<"The element is present" << endl;
	}
	else{
		cout << "The element is absent " << endl;
	}
}
