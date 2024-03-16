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

int dp2[1000001];
int dp(int number);

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int number;
    cin >> number;
    cout << dp(number);
}

int dp(int number) {
    int count = 0;
    dp2[1] = 0;
    for (int i = 2; i <= number; i++) {
        dp2[i] = dp2[i-1] + 1;
        
        if (i % 2 == 0) {
            dp2[i] = min(dp2[i], dp2[i/2] + 1);
        }
        if (i % 3 == 0) {
            dp2[i] = min(dp2[i], dp2[i/3] + 1);
        }
    }
    count = dp2[number];
    return count;
}


