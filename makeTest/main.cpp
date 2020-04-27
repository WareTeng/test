#include <iostream>
#include "employee.h"
#include "person.h"
using namespace std;

int main() {
    cout << "employee" << endl;
    employee em("dw", 3);
    cout << em.getnum() << endl;
    
    cout << "person" << endl;
    Person dw;
    cout << "name: " << dw.getName() << endl;
    cout << "age: " << dw.getAge() << endl;
    cout << "sex: " << dw.getSex() << endl;
    cout << "id: " << dw.getId() << endl;

    return 0;
}
