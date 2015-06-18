#include <iostream>
#include <cstdlib>

using namespace std;
/*
int primeFactor( int n){
	if (isPrime(n)) 
		return n;
	else if (n%2 == 0)
		return 2;

		
		//else if (n )
}
*/

int sqrt(int num)
{
	int root = -1, newroot = 1;

	while (abs(newroot-root) > 1)
	{
		root = newroot;
		newroot = (newroot + num/root) / 2;
	}
	return newroot;
}

bool isPrime(int num){
	int i;
	for (i =2 ; i < num; i++ ){
		if (num%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	unsigned long num1 = 600851475143;
	//int num1 = 13195;
	if (isPrime(num1))
	{
		cout << num1;
	}

	//int ceiling = sqrt(num1);
	int result = 0;
	for (int i =2; i < num1/i ; i++)
	{
		if (isPrime(i)){
			if (num1%i == 0){
				result = i;
			}
		}
	}
	cout << result << endl;

	return 0;
}