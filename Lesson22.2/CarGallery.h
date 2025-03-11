#pragma once


class CarGallery {
private:
	char* _name = nullptr;
	Car** _cars = nullptr;
	size_t _count = 0;

public:

	CarGallery() = default;
	CarGallery(const char* name)
	{
		setName(name);
	};


	CarGallery(const char* name, Car** cars, size_t count)
	{
		setName(name);
		_count = count;
		_cars = cars;
	};


	const char* getName() { return _name; }
	Car** getCars() { return _cars; }
	size_t getCount() { return _count; }



	void setName(const char* name)
	{
		if (name == nullptr)
			assert(!"name == nullptr");

		if (_name != nullptr)
			delete[] _name;


		size_t len = strlen(name) + 1;
		_name = new char[len];
		strcpy_s(_name, len, name);
	}



	void print()
	{
		cout << "Name: " << (_name ? _name : "null") << endl;


		cout << "=======   Cars   =======";
		for (size_t i = 0; i < _count; i++)
			_cars[i]->print();


		cout << "\n=======   End   =======\n";
	}

	void clear() {}
	void appendCar(Car* car) {}
	void removeCar(Car* car) {}
	void deleteCarById(size_t id) {}
	Car* getCarById(size_t id) {}

	~CarGallery()
	{
		cout << "\nDestructor -> " << (_name ? _name : "null") << endl;

		delete[] _name;

		for (size_t i = 0; i < _count; i++)
			delete _cars[i];

		delete[] _cars;

		_name = nullptr;
		_cars = nullptr;
	}
};