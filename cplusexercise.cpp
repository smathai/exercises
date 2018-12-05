#include<iostream>
#include<vector>
#include<time.h>

using namespace std;

class TestClass
{
private:
    vector<int> g1; 
	vector<int> SomeVector;

public:
	int SumItAll();
	void addToVector(int n)
	{
		cout << "TestClass addtovector " << n << endl;
		SomeVector.push_back(n);
	}
	vector<int> GiveMeVector(){
		return SomeVector;
	}
	TestClass() {
		cout << "making TestClass" << endl;
	}
	~TestClass() {
		std::cout << "closing TestClass" << endl;
	}
};

class Inheritor : public TestClass
{
private:
	int theSum;

public:
	Inheritor() {
		std::cout << "Inheritor called" << endl;
	}
	~Inheritor(){
		std::cout << "closing Inheritor" << endl;
	}
	int SumItAll() {
		std::cout << "SumItAll called" << endl;
		vector<int> Vect = GiveMeVector();
		int n=0;
		for(auto i:Vect){
			n = n+i;
		}
		return n;
	}


};

int main(){
	Inheritor In;
	vector<int> v;
	srand(time(0));
	int n = rand()%100;
	for (int i =0; i< n;i++)
		In.addToVector(rand()%100);
	cout << "sum is " << In.SumItAll() << endl;

	return 0;

}