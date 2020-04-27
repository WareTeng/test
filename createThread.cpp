#include <iostream>
#include<thread>
using namespace std;
void print1()
{
    cout << "print1_1线程执行" << endl;
    cout << "print1_2线程执行" << endl;
    cout << "print1_3线程执行" << endl;
}

int main()
{
    thread mythread1(print1);
    thread mythread2(print1);
    mythread1.join();

    //mythread1.detach();
    cout << "主线程执行" << endl;
    mythread2.join();
    return 0;
}
