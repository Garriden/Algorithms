//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int> &vec) {
    for(int ii = 0; ii < vec.size(); ++ii) {
        std::cout << vec[ii] << " ";   
    }
    std::cout << std::endl;
}

// n^2
void bubbleSort(vector<int> &vec) {
    int n = vec.size();
	for(int ii = 0; ii < n; ii++) {
		for(int jj = ii; jj < n; jj++) {
		    if(vec[ii] > vec[jj]) {
		        int aux = vec[jj];
		        vec[jj] = vec[ii];
		        vec[ii] = aux;
		    }
		}
	}

}

int main() {
	
	int n = 10;
	vector<int> v(n);
	v = {6,2,7,4,10,24,-3,8,-2,-36};
	
	printVector(v);
	
	bubbleSort(v);
	
    printVector(v);
}

