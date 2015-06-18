#include <iostream>

using namespace std;

bool isPrime(int num){
	int i;
	for (i =2 ; i < num; i++ ){
		if (num %i ==0){
			return false;
		}
	}
	return true;
}


int prime(){
	int n = 2, count =0;
	while (count < 10001){
		if (isPrime(n)){
			count ++;
		}
		n++;
	}
	cout<< n -1<<endl;
}

int main(){
	prime();
}