#include <iostream>
#include <string>
using namespace std;

class Person {
        public:
                Person(string, int, string, int);
                Person();
                string getName();
                int getAge();
                string getSex();
                int getId();
        private:
                string name;
                int age;
                string sex;
                int id;
};
