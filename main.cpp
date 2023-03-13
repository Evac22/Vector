#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec; // Создание пустого вектора

    // Инициализация вектора.
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Добавление элемента в конец вектора.

    vec.push_back(40);

    //Удаление элемента с конца вектора.
    vec.pop_back();

    //Поиск элемента в векторе
    int x = 20;
    auto it = find(vec.begin(), vec.end(), x);
    if (it != vec.end()) {
        cout << "Element " << x << "  Found in vector" << endl;
    }
    else {
        cout << "Element " << x << " Not found in vector" << endl;
    }

    //Вывод элементов вектора
    cout << "Vector: ";
    for (auto elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
