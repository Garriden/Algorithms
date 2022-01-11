#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);
    cout << q.front() << endl; // 3
    q.pop();
    cout << q.front() << endl; // 2
    
    return 0;
}
