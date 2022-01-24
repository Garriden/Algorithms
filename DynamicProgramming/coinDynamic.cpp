#include <bits/stdc++.h>
using namespace std;

vector<int> coins = {1,2,5,10,20,50}; 
vector<int> dp(1000,INT_MAX);


int minCoins(int N, int M) {

  //Base case 
  //Minimum coins to make sum = 0 cents is 0
  dp[0] = 0;
  
  //Iterating in the outer loop for possible values of sum between 1 to N
  //Since our final solution for sum = N might depend upon any of these values
  for(int ii = 1; ii<=N; ii++) {
    //Inner loop denotes the index of coin array.
    //For each value of sum, to obtain the optimal solution.
    for(int jj = 0; jj<M; jj++) {
      //ii —> sum
      //jj —> next coin index
      //If we can include this coin in our solution
      if(coins[jj] <= ii) {
        //Solution might include the newly included coin
        dp[ii] = min(dp[ii], 1 + dp[ii - coins[jj]]);
      }
    }
  }
  return dp[N];
}

int main() {
  int sum = 53;
  cout << minCoins(sum, coins.size());
}
