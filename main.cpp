// C++ program for function overloading
#include <iostream>

using namespace std;

class Formula1 {
public:

    // function with 1 int parameter
    void func(int driverNum) {
        cout << "Hamilton's racing number is " << driverNum << endl;
    }

    // function with same name but 1 double parameter
    void func(string team) {
        cout << "Hamilton's team is " << team << endl;
    }

    // function with same name and 2 int parameters
    void func(int driverNum, string team) {
        cout << "Hamilton drives for " << team << " under racing number " << driverNum << endl;
    }
};

int main() {

    Formula1 obj1;

    // Which function is called will depend on the parameters passed
    // The first 'func' is called 
    obj1.func(44);

    // The second 'func' is called
    obj1.func("Mercedes AMG Petronas");

    // The third 'func' is called
    obj1.func(44, "Mercedes AMG Petronas");
    return 0;
} 