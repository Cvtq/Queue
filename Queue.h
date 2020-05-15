#pragma once
#include <iostream>
#include <list>       // std::vector
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

using namespace std;

template <typename T>
class Queue
{
private:
	std::list<T> _queue;
	size_t _size = 0;
public:

	Queue() {

	}

	void Push(T item) {
		this->_queue.push_back(item);
		this->_size++;
	}

	T Pop() {
		T element;
		if (this->size() > 0) {
			element = _queue.front();
			this->_queue.pop_front();
			this->_size--;
		}
		return element;
	}

	T Peek() {
		T element = _queue.front();
		return element;
	}

	size_t size() {
		return this->_size;
	}

	bool queueEmpty() {
		return this->_size == 0;
	}

	// Вывод массива
	void print()
	{
		for (T i : _queue) {
			cout << i << ' ';
		}
	}
};

