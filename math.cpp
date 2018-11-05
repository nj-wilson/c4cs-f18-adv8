#include <iostream>
using namespace std;

int subtract(int a, int b){

	return a-b;
}

int divide(int a, int *b){

	return a / *b;
}

int do_math(int x, int y, int z){

	int temp = subtract(x,y);
	temp = divide(z, &temp);
	return temp;
}

int main(){
	
	int temp = do_math(10,10,20);
	cout << "Result: " << temp << endl;
	return 0;
}
