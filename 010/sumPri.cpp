/*  Try Sieve of Atkin for faster primility check*/
/*	Try Sieve of Eratosthenes*/


#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(int num){

	if (num ==2)
		return true;
	else if (num%2 ==0)
		return false;
	
	int arr[]={};
	for (int i = 2; i <num; i++){
		int p = 2;
		while(p*p <= n){
			int j = p*p;
			while (j <= n){
				arr[j] =0;
				j += p;
			}
			p += 1;
			if(arr[p]=1){
				break;
			}
		}
		return arr[];
	}
	/*
	for (int n =10; n < num; n++){
		if(num%n ==0){
			return false;
		}
	}
	return true;
	*/
}


int main(){
	
	long long count = 17;

	for (int n =10; n <2000000; n++){
		if(isPrime(n)){
			cout << n <<endl;
			count += n;
		}
	}

	cout << count << endl;
}