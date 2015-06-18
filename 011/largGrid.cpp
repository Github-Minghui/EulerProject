#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream file("grid.txt");
	string str;
	string numStr;
	while (getline(file,str)){
		numStr += str;
		numStr.push_back('\n');
	}	
	
}