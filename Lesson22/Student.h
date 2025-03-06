#pragma once


//// inline method - Kompilyator terefinden kodun birbasa yerlesdirilmesini temin edir, kicik olculu kodlarda performans artiri
//// explicit keyword - Konstrukturlarin avtomatik cevrilmesinin qarsini alir
//// Destructor - Class dan yaranmis obyektin omru bitdikde isleyen metoddur, esas burada dinamik melumatlarin (heap) silinmesi prosesini yerine yetiririk
//// Constructor overloading - Constructorun muxtelif sayda parametrle veya muxtelif tipli parametrle islemesine deyilir
//// Dynamic class member variable - Heap de yaranmis memberdir (pointer)
//// Dynamic class - Heap de yaranmis class instance ina deyilir (pointer)
//// Static member - Class daxilinde statik fieldlar veya metodlar yaratmaq olur



class Student {
private:
	static int _staticId;
	int _id;
	char* _name;
	int _age;

public:

	Student() = delete;

	explicit Student(int age);

	explicit Student(const char* name);

	explicit Student(const char* name, int age);

	static int getStaticId() { return _staticId; }

	void setName(const char* name);

	void print();

	~Student();
};







int Student::_staticId = 0;


Student::Student(int age)
{
	_id = ++_staticId;
	_name = nullptr;
	_age = age;
}


Student::Student(const char* name)
{
	_id = ++_staticId;
	_age = 0;

	setName(name);
}


Student::Student(const char* name, int age)
{
	_id = ++_staticId;
	_age = age;

	setName(name);
}


void Student::setName(const char* name)
{
	if (name == nullptr)
		assert(!"name == nullptr");


	if (_name != nullptr)
		delete[] _name;


	size_t len = strlen(name) + 1;
	_name = new char[len];
	strcpy_s(_name, len, name);
}


void Student::print()
{
	cout << "Id: " << _id << endl;
	cout << "Name: " << (_name ? _name : "null") << endl;
	cout << "Age: " << _age << endl;
}


Student::~Student()
{
	cout << "Destructor -> " << (_name ? _name : "null") << endl;

	delete[] _name;
}