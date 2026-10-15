#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = {4, 15, 22, 33, 40};

    numbers.push_front(9);  // Додаємо 9 на початок
    numbers.push_back(85);   // Додаємо 85 у кінець
    numbers.pop_front();     // Видаляємо перший елемент

    cout << "Список після змін: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}