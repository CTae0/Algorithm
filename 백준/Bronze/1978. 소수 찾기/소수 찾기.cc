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
bool isPrime(int number);

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int number,count;
    cin >> count;
    int num_count = 0;
    for (int i = 0; i < count; i++) {
        cin >> number;
        if (isPrime(number))
            num_count++;
    }
    cout << num_count++;
        
}

bool isPrime(int number) {
    if (number < 2)
        return false;
    else if(number == 2)
        return true;
    else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0)
                return false;
            }
        return true;
    }
}
