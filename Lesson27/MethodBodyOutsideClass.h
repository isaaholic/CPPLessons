#pragma once


// Method body a outside class (template)


template<class T, size_t size = 4>
class DynamicArrayMethodBodyOutside {
	T* _array = nullptr;

public:
	DynamicArrayMethodBodyOutside();
	T& operator[](size_t index);
};


template<class T, size_t size>
DynamicArrayMethodBodyOutside<T, size>::DynamicArrayMethodBodyOutside() {
	_array = new T[size];
}

template<class T, size_t size>
T& DynamicArrayMethodBodyOutside<T, size>::operator[](size_t index) {
	return _array[index];
};



void mainMethodOutside() {
	DynamicArrayMethodBodyOutside<int> arr;

	arr[0] = 65;
	cout << arr[0] << endl;
}