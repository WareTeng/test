#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
int BinarySearch(const int arr[], const int target, int array_size) {
    int left = 0, right = array_size - 1, mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] < target) left = mid + 1;
        else if (arr[mid] > target) right = mid - 1;
        else return mid;
    }
    return -1;
}
*/

template <class T>
int BinarySearch(const T arr[], const T target, int array_size) {
    int left = 0, right = array_size - 1, mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] < target) left = mid + 1;
        else if (arr[mid] > target) right = mid - 1;
        else return mid;
    }
    return -1;
}

int main() {
    double arr[10] = {2,3,5,12,23,45,67,77,88,110};
    int res = BinarySearch(arr, 67.0, 10);
    if (res != - 1) {
        cout << "find: " << arr[res] << endl;
    }
    else cout << "not find!" << endl;
    string s;
    string s2 = "1234";
    cout << "s size = " << sizeof(s) << endl;
    cout << "s2 size = " << sizeof(s2) << endl;
    return 0;
}
