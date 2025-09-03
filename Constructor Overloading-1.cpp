#include <iostream>
using namespace std;

class Emp {
    int age, emp_id;
    string name;
public:
    Emp() {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee Age: ";
        cin >> age;
        cout << "Enter Employee ID: ";
        cin >> emp_id;
    }

    Emp(string n, int a, int id) {
        name = n;
        age = a;
        emp_id = id;
    }

    void disp() {
        cout << "Employee Name: " << name << " ";
        cout << "\nEmployee ID: " << emp_id << " ";
        cout << "\nEmployee Age: " << age << " ";
    }
};

int main() {
    Emp e1;
    e1.disp();

    cout << "\n\n";
    Emp e2("Tanmay", 19, 1001);
    e2.disp();

    return 0;
}

