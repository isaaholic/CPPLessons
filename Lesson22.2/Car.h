#pragma once


//// Delegation of constructors - Constructor daxilinde basqa bir constructoru cagirmasi halina deyilir
//// Initializer list


class Car {
private:

	static size_t _staticId;
	size_t _id = 0;
	char* _make = nullptr;
	char* _model = nullptr;
	char* _color = nullptr;
	ushort  _year = 0;
	double _engine = 0;

public:

	Car();
	Car(const char* make, const char* model, const char* color);
	Car(const char* make, const char* model, const char* color, ushort year, double engine);


	static size_t getStaticId();
	size_t getId();
	const char* getMake();
	const char* getModel();
	const char* getColor();
	ushort getYear();
	double getEngine();


	void setMake(const char* make);
	void setModel(const char* model);
	void setColor(const char* color);
	void setYear(ushort year);
	void setEngine(double engine);


	void print();

	~Car();
};







//////////////////////// Implementation





//////////// Constructors

Car::Car() {
	cout << "Default Constructor\n";
	_id = ++_staticId;
};

Car::Car(const char* make, const char* model, const char* color)
	:Car()
{
	cout << "Constructor with Param 2\n";
	setMake(make);
	setModel(model);
	setColor(color);
}

Car::Car(const char* make, const char* model, const char* color, ushort year, double engine)
	:Car(make, model, color)
{
	cout << "Constructor with Param 3\n";
	setYear(year);
	setEngine(engine);
}





//////////// Destructor

Car::~Car()
{
	cout << "\nDestructor -> " << (_model ? _model : "null") << endl;

	delete[] _make;
	delete[] _model;
	delete[] _color;

	_make = _model = _color = nullptr;
}







//////////// Fields

size_t Car::_staticId = 0;





//////////// Methods



//// Accessors (getter)

size_t Car::getStaticId() { return _staticId; }

size_t Car::getId() { return _id; }

const char* Car::getMake() { return _make; }

const char* Car::getModel() { return _model; }

const char* Car::getColor() { return _color; }

ushort Car::getYear() { return _year; }

double Car::getEngine() { return _engine; }






//// Accessors (setter)

void Car::setMake(const char* make)
{
	if (make == nullptr)
		assert(!"make == nullptr");

	if (_make != nullptr)
		delete[] _make;


	size_t len = strlen(make) + 1;
	_make = new char[len];
	strcpy_s(_make, len, make);
}

void Car::setModel(const char* model) {
	if (model == nullptr)
		assert(!"model == nullptr");

	if (_model != nullptr)
		delete[] _model;


	size_t len = strlen(model) + 1;
	_model = new char[len];
	strcpy_s(_model, len, model);
}

void Car::setColor(const char* color)
{
	if (color == nullptr)
		assert(!"color == nullptr");

	if (_color != nullptr)
		delete[] _color;


	size_t len = strlen(color) + 1;
	_color = new char[len];
	strcpy_s(_color, len, color);
}

void Car::setYear(ushort year)
{
	if (year >= 1886 && year < 9999)
		_year = year;
	else
		assert(!"year >= 1886 && year < 9999");
}

void Car::setEngine(double engine)
{
	if (engine > 0 && engine < 10)
		_engine = engine;
	else
		assert(!"engine > 0 && engine < 10");
}

void Car::print()
{
	cout << "\nId: " << _id << endl;
	cout << "Name: " << (_make ? _make : "null") << endl;
	cout << "Model: " << (_model ? _model : "null") << endl;
	cout << "Color: " << (_color ? _color : "null") << endl;
	cout << "Year: " << _year << endl;
	cout << "Engine: " << _engine << endl;
}
