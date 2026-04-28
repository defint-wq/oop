#include <iostream>
using namespace std;

int count() {
    static int k = 0;
    k++;
    return k;
}

int main() {
    cout << count() <<endl;
    cout << count() <<endl;
    cout << count() <<endl;
}