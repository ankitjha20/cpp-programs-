// sorting in  normal order

#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
    
    int size ;
    cin >> size ;
    
    int arr[100];
    
    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i];
        
    }
    
    sort(arr, arr + size);
    
     for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << "  ";
        
    }
    
    
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Sorting in Reverse Order



#include<iostream>
#include<algorithm>
using namespace std ;


//This function is for reverse sorting
bool compare(int a , int b ){
	cout << "comparing " << a << "and " << b << endl;
	return a > b;
}
int main(){
    
    int size ;
    cin >> size ;
    
    int arr[100];
    
    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i];
        
    }
    
    sort(arr, arr + size , compare);  // calling function as interanl parameter of another function
    
     for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << "  ";
        
    }
    
    
}
