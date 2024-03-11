//
//  main.cpp
//  practice
//
//  Created by 최태영 on 1/10/24.
//

#include <iostream>
#include <set>
#include <string>

using namespace std;

struct Compare {
    bool operator() (const string &a, const string &b) const {
        if (a.size() == b.size())
            return a < b;
        else
            return a.size() < b.size();
    }
};

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int count;
    cin >> count;
    set<string,Compare> s;
    string str;
    for (int i = 0; i < count; i++) {
        cin >> str;
        s.insert(str);
    }
    
    for (set<string>::iterator iter=s.begin(); iter != s.end(); iter++)
        cout << *iter <<"\n";
}
