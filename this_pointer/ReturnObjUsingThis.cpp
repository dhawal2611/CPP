#include <iostream>
using namespace std;

class Test {
    int x, y;
public:
    Test(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    Test& setX(int a) {
        x = a;
        return *this;
    }

    Test& setY(int b) {
        y = b;
        return *this;
    }

    void print() {
        cout << "x = " << x << " y = " << y << endl;
    }
};

int main() {
    Test obj;
    //obj.setX(10).setY(20).print(); //This also works sepertely and indipendently
    obj.setX(10);
    obj.setY(20);
    obj.print();
    return 0;
}
