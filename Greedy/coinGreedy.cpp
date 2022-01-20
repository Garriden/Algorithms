#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> V = {1,2,5,10,20,50,100,200};
    int n = 521;
    int cont = 0;
    int ii = 0;
    
    while(cont < n || ii >= V.size()) {
        if(V[V.size()-1-ii] + cont > n) {
            ii++;
        } else {
            cont += V[V.size()-1-ii];
            cout << cont << endl;
        }
    }
    
    return 0;
}
