#pragma once

class Fraction
{
public:
	int _num = 0;
	int _denom = 0;

	Fraction(int num, int denom)
	{
		cout << "Ctor with Param\n";
		_num = num;
		_denom = denom;
	}

	Fraction(const Fraction& other)
	{
		cout << "Copy Ctor\n";
		_num = other._num;
		_denom = other._denom;
	}



	Fraction operator*(const Fraction& other)
	{
		return Fraction(_num * other._num, _denom * other._denom);
	}
	Fraction& operator*=(const Fraction& other)
	{
		_num *= other._num;
		_denom *= other._denom;

		return *this;
	}
	Fraction operator-(const Fraction& other)
	{
		return Fraction(_num - other._num, _denom);
	}
	Fraction& operator-()
	{
		_num = -_num;
		_denom = -_denom;

		return *this;
	}
	bool operator==(const Fraction& other)
	{
		return _num == other._num && _denom == other._denom;
	}
	bool operator!=(const Fraction& other)
	{
		return !(_num == other._num && _denom == other._denom);
	}
	bool operator!()
	{
		return !_num;
	}


	//// Prefix
	Fraction& operator++()
	{
		_num += _denom;
		return *this;
	}
	Fraction& operator--()
	{
		_num -= _denom;
		return *this;
	}


	//// Postfix
	Fraction& operator++(int)
	{
		Fraction temp = *this;
		_num += _denom;
		return temp;
	}
	Fraction& operator--(int)
	{
		Fraction temp = *this;
		_num -= _denom;
		return temp;
	}

	//Fraction operator/(const Fraction& other)
	//{
	//	return Fraction(_num * other._denom, _denom * other._num);
	//}

	void print()
	{
		cout << _num << '/' << _denom << endl;
	}
};




Fraction operator/(const Fraction& f1, const Fraction& f2)
{
	return Fraction(f1._num * f2._denom, f1._denom * f2._num);
}