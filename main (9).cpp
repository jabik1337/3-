#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = {4, 15, 22, 33, 40};

    // 1. Видаляємо перший непарний елемент
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it % 2 != 0) {
            numbers.erase(it);
            break;
        }
    }

    // 2. Вставляємо 88 перед кожним елементом, який ділиться на 4
    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it % 4 == 0) {
            numbers.insert(it, 88);
        } else {
            ++it;
        }
    }

    cout << "Список після виконання завдання 5: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}