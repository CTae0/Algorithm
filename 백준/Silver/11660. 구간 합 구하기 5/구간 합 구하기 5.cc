#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    int sum;
    cin >> n >> m;
    n++;
    vector<vector<int>> v(n,vector<int>(n,0));
    vector<vector<int>> mat(n,vector<int>(n,0));
    int number;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            cin >> number;
            v[i][j] = number;
        }
    }
    
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if(i == 1 && j == 1)
                mat[i][j] = v[i][j];
            else if(i == 1){
                mat[i][j] = mat[i][j-1] + v[i][j];
            }
            else if(j == 1){
                mat[i][j] = mat[i-1][j] + v[i][j];
            }
            else {
                mat[i][j] = mat[i][j-1] + mat[i-1][j] + v[i][j] - mat[i-1][j-1];
            }
        }
    }
    int x1,x2,y1,y2;
    for (int i = 0; i < m; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        sum = mat[x2][y2] - (mat[x1-1][y2] + mat[x2][y1-1]) + mat[x1-1][y1-1];
        cout << sum <<"\n";
    }
 
}

