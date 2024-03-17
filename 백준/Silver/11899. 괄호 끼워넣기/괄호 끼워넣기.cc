//
//  main.cpp
//  practice
//
//  Created by 최태영 on 1/10/24.
//

#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <stack>


using namespace std;

int dp(vector<int> v,int number);

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int count;
    stack<char> stk;
    string s;
    string str;
    cin >> str;
    count = 0;
        for (int i = 0; i < str.length(); i++) {
            if(str[i] == '(') {
                stk.push(str[i]);
            }
            else if (!stk.empty() && stk.top() == '(' && str[i] ==')') {
                stk.pop();
                count = count + 2;
            }
    }
    cout << str.size() - count;
}


