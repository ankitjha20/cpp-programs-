// Binary seearch using STL

#include<iostream>
#include<algorithm>
using namespace std;
 
 void print(int arr[] , int size){
 	for(int i = 0 ; i < size ; i++){
 		cout << arr[i] << " ";
	 }
 }
 
int main (){
	int size ;
	cin >> size;
	
	int arr[100];
	for(int i = 0; i < size ; i++){
		cin >> arr[i];
	}
	
	cout <<"Array before Sorting:"<< endl ;
	print(arr , size);
	cout << endl;
	
	sort(arr , arr + size);
	cout << "Arrat After Sorting :" << endl;
    print(arr , size);
    cout << endl;
	
	int key;
	cout << "enter the element t0 find" << endl;
	cin >> key;
	cout << endl;
	
	if(binary_search( arr , arr + size , key)){
		cout <<"Element is found"<< endl ;
	}
	else {
		cout << "Element not found " << endl;
	}
}
