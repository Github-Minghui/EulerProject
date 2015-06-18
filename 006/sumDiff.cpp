#include <iostream>

using namespace std;

int main(){
	int sq =0, sum = 0;
	for (int n = 1; n<= 100; n++){
		sq = sq + n*n;
		sum = sum + n;
	}
	cout << sum*sum<< "	"<<sq<<endl;
	int sm2= sum *sum;
	cout<< sm2 -sq<<endl;
}