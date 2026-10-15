#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = {4, 15, 22, 33, 40};

    // Зменшуємо кожен елемент на 2 за допомогою ітератора
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it -= 2;
    }

    cout << "Список після зменшення на 2: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}