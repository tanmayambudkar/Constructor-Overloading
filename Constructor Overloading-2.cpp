#include <iostream>
using namespace std;

class Std {
    int age, stud_id;
    string name;

public:
    Std() {
        name = "Unknown";
        age = 0;
        stud_id = 0;
    }

    Std(string n, int a, int id) {
        name = n;
        age = a;
        stud_id = id;
    }

    Std(string n) {
        name = n;
        age = -1;      
        stud_id = -1;  
    }

    Std(int a, int id) {
        name = "Not Provided";
        age = a;
        stud_id = id;
    }

    Std(const Std &obj) {
        name = obj.name;
        age = obj.age;
        stud_id = obj.stud_id;
    }

    void disp() {
        cout << "Student Name: " << name;
        cout << "\nStudent ID: " << stud_id;
        cout << "\nStudent Age: " << age << endl;
    }
};

int main() {
    Std s1;
    cout << "Default Constructor: " << endl;
    s1.disp();

    cout << "\nParameterized: " << endl;
    Std s2("Tanmay", 19, 119);
    s2.disp();

    cout << "\nOnly Name: " << endl;
    Std s3("Rahul");
    s3.disp();

    cout << "\nOnly Age & ID: " << endl;
    Std s4(21, 202);
    s4.disp();

    cout << "\nCopy Constructor: " << endl;
    Std s5(s2);
    s5.disp();

    return 0;
}
