#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = {4, 15, 22, 33, 40};

    int oddCount = 0;
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it % 2 != 0) {
            oddCount++;
        }
    }

    cout << "Кількість непарних елементів: " << oddCount << endl;
    
    cout << "Список у зворотному порядку: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}