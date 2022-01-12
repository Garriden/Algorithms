#include <iostream>
#include <set>

using namespace std;

// str : Stores input string
// curr : Stores current subset
// index : Index in current subset, curr
void subset(string str, int index = -1, string curr = "") {
    int n = str.length();
 
    // base case
    if (index == n) {
        return;
    }
    
    cout << curr << "\n";

    for (int i = index + 1; i < n; i++) {
        curr += str[i];
        subset(str, i, curr);
        curr.erase(curr.size() - 1);
    }
    
}

int main()
{
    string s = "hola";
    subset(s);
    
    return 0;
}
