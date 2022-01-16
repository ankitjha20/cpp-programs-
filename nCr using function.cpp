// combinatio (nCr) using C++ 


#include<iostream>
using namespace std ;

// making a function for factorail

int factorial(int n ){
	int  fact = 1;
	if ( n==0 ){
		return 1;
	}
	for (int i = 1 ; i <= n ; i++){
		fact = fact * i;
	}
	return fact;
}

// making a function for combination 

int nCr (int n , int r ){
	
	int num = factorial(n); // calling the factorial function 
	int denom = factorial(r) * factorial(n-r);
	int ans = num / denom ;
	
	return ans ;
}

int main ()
{
	int n , r ;
	
	cout << "Enter the value of n :";
	cin >> n ;
	
	cout << "Enter the value of r:";
	cin >>  r;
	
	int combination = nCr( n , r); // calling the combination function 
	cout << "The combination is :" << combination << endl ;
}
