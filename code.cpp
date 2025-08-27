#include <iostream>
using namespace std;
// this is the starting point of execution
int main(int argc, char const *argv[])
{
    int age = 10; // 4 bytes
    const char* grade = "A";; // 1 byte
    float PI = 3.14f;  // 4 bytes
    bool isSafe = true; // 1 byte
    double height = 2.90; // 8 bytes

    cout << age << endl;
    cout << grade << endl;
    cout << PI << endl;
    cout << isSafe << endl;
    cout << height << endl;

    return 0;
}
// this is a boiler code