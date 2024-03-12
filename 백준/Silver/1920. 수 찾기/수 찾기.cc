//
//  main.cpp
//  practice
//
//  Created by 최태영 on 1/10/24.
//

#include <iostream>
#include <set>
#include <string>
#include <algorithm>


using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt_n;
    cin >> cnt_n;
    int number;
    vector<int> v(cnt_n);
    for (int i = 0; i < cnt_n; i++) {
        cin >> number;
        v[i] = number;
    }
    sort(v.begin(),v.end());
    cin >> cnt_n;
    for (int i = 0; i < cnt_n; i++) {
        cin >> number;
        if (binary_search(v.begin(), v.end(), number))
            cout << "1" << "\n";
        else
            cout << "0" << "\n";
    }
   
    
}


