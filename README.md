#Практична робота №3: Реалізаця двозв'язних списків. Контейнер list
**Виконав:** студент групи 4-сом Нефедова Ксенія (Варіант № 10)

##  Завдання.
**Завдання:** 
<img width="697" height="396" alt="Знімок екрана 2026-10-15 о 08 57 03" src="https://github.com/user-attachments/assets/f1f72850-fade-45d0-91c9-78bd50ac14e1" />


### 💻 Код програми:
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = {4, 15, 22, 33, 40};
    // Завдання 1
    cout << "1. Початковий список: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n\n";
    // Завдання 2: 
    numbers.push_front(9);
    numbers.push_back(85);
    numbers.pop_front();
    cout << "2. Список після додавання (9 спереду, 85 в кінці) та видалення першого елемента: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    // Завдання 3:
    cout << "3. Список у зворотному порядку: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    cout << "\n\n";
    // Завдання 4: 
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it -= 2;
    }
    cout << "4. Список після зменшення кожного елемента на 2: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n\n";
    // Завдання 5: 
    // 5.1 Видалення першого непарного елемента
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it % 2 != 0) {
            numbers.erase(it); 
            break;             
        }
    }
    // 5.2 Вставка 88 перед кожним елементом, який ділиться на 4
    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it % 4 == 0) {
            numbers.insert(it, 88); 
        } else {
            ++it; 
        }
    }
    cout << "5. Список після видалення першого непарного та вставки 88 перед кратними 4: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n\n";
    // Завдання 6: 
    int oddCount = 0;
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it % 2 != 0) {
            oddCount++;
        }
    }
    cout << "6. Кількість непарних елементів у списку: " << oddCount << endl;
    cout << "   Оновлений список у зворотному порядку: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
