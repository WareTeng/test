#include <iostream>
using namespace std;

class Temp {
public:
    Temp() {++N; sum += N;}
    static void Reset() {N = 0; sum = 0;}
    static unsigned int GetSum() {return sum;}
private:
    static unsigned int N;
    static unsigned int sum;
};

unsigned int Temp::N = 0;
unsigned int Temp::sum = 0;

unsigned int SumSolution(unsigned int n) {
    Temp::Reset();
    Temp *a = new Temp[n];
    delete []a;
    a = NULL;
    return Temp::GetSum();
}

class A;
A* Array[2];

class A {
public:
    virtual unsigned int Sum(unsigned int n) {return 0;}
};

class B: public A {
public:
    virtual unsigned int Sum(unsigned int n) {
        return Array[!!n]->Sum(n - 1) + n;
    }
};

int main() {
   // unsigned int res;
   //res = SumSolution(100);
   // cout << res << endl;
    A a;
    B b;
    Array[0] = &a;
    Array[1] = &b;
    int value = Array[1]->Sum(100);
    cout << value << endl;
    return 0;
}
