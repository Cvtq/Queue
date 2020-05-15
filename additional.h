#include <iostream>
#include <vector>       // std::vector
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

using namespace std;

// Вспомогательные функции
//////////////////////////////////////////////////////////////////////////////

// Перемешивает массив (в поиске не используется)
template <typename T>
void shuffleArray(vector<T>& a) {
    default_random_engine engine;
    engine.seed(std::chrono::system_clock::now().time_since_epoch().count());
    std::shuffle(std::begin(a), std::end(a), engine);
}

// Заполняет массив числами линейно
template <typename T>
void fillArray(vector<T>& a, size_t n) {
    for (size_t i = 10; i < n; i++) {
        a.push_back(i);
    }
}

// Вывод массива
template <typename T>
void print(vector<T> const& arr)
{
    for (T i : arr) {
        cout << i << ' ';
    }
}