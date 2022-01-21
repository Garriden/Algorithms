#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int count(vector<int> coins, int size, int n) {

    if (n <= 0) return 0;
	
    // Initialize result
    int res = 10000;
  
  // Try every coin that has smaller value than size
  for (int ii=0; ii<size; ii++) {
    if (coins[ii] <= n) {
      int sub_res = 1 + count(coins, size, n-coins[ii]);
      // see if result can minimized
      if (sub_res < res) res = sub_res;
    }
  }
  return res;

}


int main()
{
    vector<int> V = {1,2,5,10,20};
    int n = 21;
    
    cout << count(V, V.size(), n) << endl;
    
    return 0;
}
