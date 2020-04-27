#include <iostream>
#include <vector>
using namespace std;

void func(vector<int>& v) {
    v.push_back(4);
    for (auto c : v) {
        cout << c << " ";
    }
    cout << endl;
}

class Internet {
public:
Internet(int a_, int b_) {
    a = a_;
    b = b_;
}

friend void show(Internet& obj);
private:
    int a;
    int b;
};

void show(Internet& obj) {
    cout << obj.a << " " << obj.b << endl;
}

class B;
class A;
void show2(A&, B&);

class B {
public:
B(int t){tt = t;}
friend class A;
friend void show2(A&, B&);

private:
int tt;
};

class A{
public:
A(int tmp = 200):value(tmp){}
friend void show2(A&, B&);

void show2(B& b) {
    cout << value << endl;
    cout << b.tt << endl;
}

private:
int value;
};

void show2(A& a, B& b){
    cout << a.value << endl;
    cout << b.tt << endl;
}

int add(double left, int right) {
    return left + right;
}

class C {
public:
    virtual void func1(int i) {
        cout << "Base::func1" << endl;
    }

    virtual void func2(int i) {
        cout << "Base::func2" << endl;
    }

    virtual void func3(int i) {
        cout << "Base::func3" << endl;
    }
    int _data1;
    char _data;
    int _data2;
};

int main() {
//    A a;
//    B b(100);
//    show2(a, b);
//    cout << "-----------" << endl;
//    a.show2(b);
//    int res = add(1.0, 2);
//    cout << sizeof(res) << endl;
//    cout << sizeof((int)1 + (long long)2) << endl;
    cout << sizeof(C) << endl;
    C c;
    c._data = 10;
    return 0;
}
