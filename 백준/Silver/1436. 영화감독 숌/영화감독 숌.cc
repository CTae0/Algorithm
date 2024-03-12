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
    
    int number;
    int seris = 0;
    cin >> number;
    string str;
    for (int i = 0; i < 2147483647; i++) {
        str = to_string(i);
        if (str.find("666") != string::npos) {
            seris++;
            }
        if (seris == number) {
            cout << i;
            break;
        }
            
    }
}
