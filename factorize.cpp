#include <iostream>
using namespace std;
int n;
void powfind(int &n, int i) {
    if (n%i==0) {
        cout << '(' << i;
        int j = 0;
        while (n%i==0) {
            n/=i;
            ++j;
        }
        cout << '^' << j << ')';
    }
}
int main() {
    cin >> n;
    cout << n << " = ";
    int i = 5;
    powfind(n, 2);
    powfind(n, 3);
    while (i<=n/i) {
        powfind(n, i);
        powfind(n, i+2);
        i+=6;
    }
    if (n!=1) {
        cout << '(' << n << "^1)";
    }
    cout << '\n';
    return 0;
}