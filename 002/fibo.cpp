#include <iostream>
#include <cstdlib>
using namespace std;

int fib(int x)
{

	if (x == 1 || x ==0 ) return 1;
	if (x == 2) return 2;
	else return fib(x-1) + fib(x-2);
}

int main()
{
	int num = 1, count = 0;
	while (fib(num) <= 4000000){
		if (fib(num)%2 == 0){
			count += fib(num);
		}
		num ++;
	}
	cout << count << endl;
}