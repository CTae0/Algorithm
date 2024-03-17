//
//  main.cpp
//  practice
//
//  Created by 최태영 on 1/10/24.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dp(vector<int> v,vector<int> arr,int number);

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int number;
    cin >> number;
    vector<int> v(number);
    vector<int> arr(number);
    fill(arr.begin(),arr.end(),1);
    
    for (int i = 0;i < number; i++) {
        cin >> v[i];
    }
    
    cout << dp(v,arr,number);

}

int dp(vector<int> v, vector<int> arr, int number) {
    int count = 0;
    for (int i = 1;i < number; i++) {
        for (int j = 0; j < i; j++) {
            if (v[i] > v[j])
                arr[i] = max(arr[i], arr[j]+1);
               
        }
    }
    count = *max_element(arr.begin(), arr.end());
    
    return count;
}


