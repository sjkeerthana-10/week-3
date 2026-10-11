#include <iostream>
using namespace std;

inline int minVal(int a, int b) {
    return (a < b) ? a : b;
}

inline int minVal(int a, int b, int c) {
    return minVal(minVal(a, b), c);
}

int main() {
    cout << "minVal(4,9): " << minVal(4, 9) << endl;
    cout << "minVal(7,2,5): " << minVal(7, 2, 5) << endl;
    return 0;
}