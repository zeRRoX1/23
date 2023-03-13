#include <iostream>
#include "Class.h"

using namespace std;

void Test() {
    Point x(6.5, 9.04);
    Point y(-4, 1.3);

    x = x * 5;
    y = x + y;

    x.Show();
    y.Show();
    if (x != y)
        cout << "FALSE\n\n";
}

int main() {
    
    Test();
}
