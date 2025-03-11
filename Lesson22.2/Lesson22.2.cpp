#include <iostream>
#include <cassert>

using namespace std;

typedef unsigned short ushort;


#include "Car.h"
#include "CarGallery.h"


int main() {

	size_t size = 2;
	Car** cars = new Car * [size] {
		new Car("Kia", "Cerato", "White", 2013, 1.6),
			new Car("Bmw", "F30", "Black", 2020, 3.5)
		};

	CarGallery* gallery = new CarGallery("IV Murad", cars, size);
	gallery->print();


	delete gallery;

	return EXIT_SUCCESS;
}