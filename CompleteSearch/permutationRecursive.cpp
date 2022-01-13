#include <bits/stdc++.h>
using namespace std;
 
 
void permute(string a, int l) {
    if(l == (a.size()-1) ) cout << a << endl;
    else {
        for(int ii = l; ii <= a.size()-1; ii++) {
            swap(a[ii], a[l]);
          
            permute(a,l+1);
          
            swap(a[ii], a[l]); // backtrack
        }
    }
}
 
int main() {
    string str = "ABC";
    permute(str, 0);
    return 0;
 }
