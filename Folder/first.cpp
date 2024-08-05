#include<iostream>
#include<cstring> // Include the cstring header for strcpy
using namespace std;

class customer {
public:
    char name[100];
    int age;
    int balance;
    char gender;

    customer() {
        cout << "I am inside the default constructor." << endl;
    }

    // parameterized constructor
    customer(char* n, int a, int b, char g) {
        strcpy(name, n);
        age = a;
        balance = b;
        gender = g;
        cout << "I am inside the parameterized constructor." << endl;
    }

    void print() {
        cout << "Customer info:" << endl;
        cout << "Name = " << name << endl << "Age = " << age << endl << "Balance = " << balance << endl << "Gender = " << gender << endl;
    }
};

int main() {
    customer c1("raju", 26, 245, 'O'); // Use constructor syntax to create the object
   // c1.print();
    customer c2;
    c2 = c1;
    c2.print();

    return 0;
}

