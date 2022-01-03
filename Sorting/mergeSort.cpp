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

// Merge two subarrays L and M into arr
void merge(vector<int> &vec, int p, int q, int r) {

    // Create L ← A[p..q] and M ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = vec[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = vec[q + 1 + j];

    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            vec[k] = L[i];
            i++;
        } else {
            vec[k] = M[j];
            j++;
        }
        k++;
    }

    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = M[j];
        j++;
        k++;
    }
}

// nlogn
void mergeSort(int left, int right, vector<int> &vec) {
	if(left == right) return;
	int mid = (left+right)/2;
    mergeSort(left,mid,vec);
    mergeSort(mid+1,right,vec);
    
    merge(vec, left, mid, right);
}

int main() {
	
	int n = 10;
	vector<int> v(n);
	v = {6,2,7,4,10,24,-3,8,-2,-36};
	
	printVector(v);
	
	mergeSort(0,n,v);
	
    printVector(v);
}

