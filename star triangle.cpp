#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n*2; i += 2) {
        cout << string((n*2 - i)/2, ' ') << string(i, '*') << endl;
    }
}