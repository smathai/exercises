#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int r, c;
bool found = false;

void printGrid(int ** grid){
	int j,k;
	for(j=0;j<r;j++){
		for(k=0;k<c;k++){
			cout << grid[j][k] << " ";
		}
		cout << endl;
	}

}

void traverse(int **grid, int j, int k){
	//cout << "traverse";
	if (j==r-1 && k==c-1){
		found == true;
		cout << "GOT TO THE END!" << endl << j << " " << k << endl;
		printGrid(grid);
		return;
	}
	else if (grid[j][k]==0)
		return;
	else if (j+1 < r && grid[j+1][k] != 0)
		traverse(grid, j+1,k);
	else if (k+1 < c && grid[j][k+1] !=0)
		traverse(grid, j,k+1);
	
	grid[j][k]=0;
	
	cout << j <<","<<k<<endl;



}


int main(){
	int i,j,k;
	cin >> r >> c;
	int **grid = (int**)malloc(sizeof(int*)*r);
	for(i=0;i<r;i++){
		grid[i] = (int*)malloc(sizeof(int)*c);
		for(j=0;j<c;j++){
			grid[i][j] = 1;
		}
	}


	int N;
	cin >> N;
	for (i=0;i<N;i++){
		cin >> j >> k;
		grid[j][k]=0;
	}

	printGrid(grid);

	traverse(grid, 0,0);
	
	printGrid(grid);
	return 0;
}