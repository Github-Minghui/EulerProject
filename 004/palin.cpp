#include <iostream>

using namespace std;

bool palindrome(int n){
	int num = 0, key = n, reverse = 0;
	for (int i = 1; n!=0; i++){
		num = n%10;
		n = n/10;
		reverse = num + (reverse*10);
	}

	if (reverse ==key){
		return true;
	}
	else return false;
}

int main()
{
	//cout<<palindrome(1000)<<endl;
	int max = 0;
	for (int i=1000; i >0;i--){
		for (int j = 1000; j >0; j--){
			int product = i* j;
			if (palindrome(product)){
				if ( max < product)
					max = product;
			}
		}
	}

	cout << max << endl;


}
