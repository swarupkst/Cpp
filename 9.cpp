#include <iostream>
#include <string>
using namespace std;

class student {
public:
    string name;
    int roll_no;
};

int main() {
    student obj1,obl2;

    obj1.name = "john";
    obl2.roll_no = 2;

    cout << "Name: " << obj1.name << endl;
    cout << "roll: " << obl2.roll_no << endl;
}
