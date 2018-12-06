#include<iostream>
#include<vector>
#include<time.h>
#include<stack>

using namespace std;

template <class T>
T addThings(T a, T b){
	return a+b;
}

class TestClass
{
private:
    vector<int> g1; 
	vector<int> SomeVector;

public:
	int SumItAll();
	template <class T>
	void addToVector(T n)
		{
			cout << "TestClass addtovector " << n << endl;
			SomeVector.push_back(n);
		}
	template <class T>
	vector<T> GiveMeVector(){
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
		vector<int> Vect = GiveMeVector<int>();
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
		In.addToVector<int>(rand()%100);
	cout << "sum is " << In.SumItAll() << endl;

	
	cout << "adding integers " << addThings<int>(1, 2) <<endl;
	cout << "adding floats " << addThings<float>(1.2, 2.2) <<endl;

	int row = rand()%50;
	int col = rand()%50;
	vector< vector<int>> grid(row);
	
	vector<int> column;
	for (int i=0; i<row;i++){
		for (int j = 0; j< col; j++)
			column.push_back(j);
		grid[i]=column;
		column.clear();
	}
	for(int j=0; j < grid.size(); j++) {
		for(int k=0; k < grid[j].size(); k++)
			cout << k <<" ";
		cout << endl;
	}
			
	vector<pair<int, int>> vPair;
	for(int i=0; i<row; i++){
		for (int j=0; j<col; j++){
			vPair.push_back({i,j});
		}
		//cout << endl;
	}

	for(int i=0; i<row; i++){
		cout << "{" << vPair[i].first << " " << vPair[i].second<<"}" ;
	}
	cout <<endl;

	return 0;

}