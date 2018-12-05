#include <stdio.h>
#include <iostream>
#include <vector>
//#include <array>

using namespace std;

void func(vector<int> &arr){
	cout << arr.size();

	return;
}

void fun2(int mem[])
{

}

int main(){
	vector<int> arr(10,-1);
	int *mem = new int[10];
	func(arr);

	return 1;
}