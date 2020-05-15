#include <iostream>
#include <vector>
#include "Queue.h"
#include "additional.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const size_t n = 90;

    // Массив чисел в диапазоне 10-99
    vector<int> v;
    fillArray(v, 100);
    shuffleArray(v);

    cout << "Массив: " << endl;
    print(v);    
    cout << endl;
    
    Queue<int> q[10];

    // Сортировка по единициам
    for (size_t i = 0; i < v.size(); i++) {
        q[v[i] % 10].Push(v[i]);
    }

    cout << "Сортировка по единицам: " << endl;
    for (size_t i = 0; i < 10; i++) {
        q[i].print();
    }
    cout << endl;

    vector<int> v2;
    for (size_t i = 0; i < 10; i++) {
        size_t len = q[i].size();
        for (size_t j = 0; j < len; j++) {
            v2.push_back(q[i].Pop());
        }        
    }

    // Сортировка по десяткам
    Queue<int> q2[10];    
    for (size_t i = 0; i < v2.size(); i++) {
        q2[int(v2[i] / 10)].Push(v2[i]);
    }

    cout << "Сортировка по десяткам (окончательная): " << endl;
    for (size_t i = 0; i < 10; i++) {
        q2[i].print();
    }
    cout << endl;
    

}
