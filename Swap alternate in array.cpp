 #include<iostream>
 using namespace std;
 
 void swapAlternate(int arr[] , int size){
 	for(int i = 0 ; i < size ; i += 2){
 		if(i+1 < size){
 			swap(arr[i] , arr[i+1]);
		 }
	 }
 }
 
 void printArray(int arr[] , int size){
 	for(int i = 0 ; i < size ; i ++){
 		cout << arr[i] << "  ";
	 }cout << endl;
 }
 
 int main(){
 	int even[8] = { 5 , 8 ,67 ,14 ,74 , 65 , 22 , 32};
 	int odd[5] = { 7 ,5 , 9, 11 ,31};
 	
 	swapAlternate(even , 8);
 	swapAlternate(odd , 5);
 	
 	printArray(even , 8);
 	printArray(odd , 5);
 }
