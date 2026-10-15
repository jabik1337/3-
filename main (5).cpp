#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = {4, 15, 22, 33, 40};

    cout << "Елементи списку: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}