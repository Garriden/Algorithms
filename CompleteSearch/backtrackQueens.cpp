#include <bits/stdc++.h>
using namespace std;
 
int N = 4; // Number of queens
vector<vector<bool> > board(N, vector<bool>(N, false));

bool canIPutAQueen(int row, int col) {
    if(board[row][col] == 1) return false;
    else {
        for(int ii = 0; ii < N; ++ii) {
            if(board[row][ii] && ii != col) return false;
            if(board[ii][col] && ii != row) return false;
            if( ((row-ii) >= 0) && ((col-ii) >= 0)) {
                if(board[row-ii][col-ii]) return false;
            }
            if( ((row-ii) >= 0) && ((col+ii) < N)) {
                if(board[row-ii][col+ii]) return false;
            }
            if( ((row+ii) < N) && ((col+ii) < N)) {
                if(board[row+ii][col+ii]) return false;
            }
            if( ((row+ii) < N) && ((col-ii) >= 0)) {
                if(board[row+ii][col-ii]) return false;
            }
        }
    }
    
    return true;
}

bool backtrackQueens(int n) {
    if(n == 0) return true;
    for(int ii=0; ii<N; ii++) {
        for(int jj=0; jj<N; jj++) {
            if(canIPutAQueen(ii, jj)) {
                board[ii][jj] = 1;
                if(backtrackQueens(n-1)) {
                    return true;
                }
                board[ii][jj] = 0;
            }
        }
    }
    return false;
}


int main() {
    bool can = backtrackQueens(N);
    cout << can << endl;
    if(can) {
        for(int ii=0; ii<N; ii++) {
            for(int jj=0; jj<N; jj++) {
                cout << board[ii][jj] << " ";
            }
            cout << endl;
        }
    }

}
