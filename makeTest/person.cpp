#include "person.h"

Person::Person(string name_, int age_, string sex_, int id_) {
    name = name_;
    age = age_;
    sex = sex_;
    id = id_;
}

Person::Person() {
    name = "dw";
    age = 24;
    sex = "boy";
    id = 3783;
}

string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

string Person::getSex() {
    return sex;
}

int Person::getId() {
    return id;
}
