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
bool fal_num(int n) {
    string str = to_string(n);
    string str2 = str;
    reverse(str.begin(),str.end());
    if (str.compare(str2) == 0)
        return true;
    else
        return false;
        
}

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int number;
    while(cin>> number) {
        if (number == 0)
            break;
        if (fal_num(number))
            cout << "yes\n";
        else
            cout << "no\n";
        
    }
}
