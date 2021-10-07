#include "Complex.h"
#include <iostream>
using std::cout;
using std::endl;

Complex::Complex(int a, int b)
{
	SetComplex(a, b);
}

void Complex::SetComplex(int a, int b)
{
	SetFirstnum(a);
	SetSecondnum(b);
}

void Complex::SetFirstnum(int num)
{
	firstnum = num;
}

void Complex::SetSecondnum(int num2)
{
	secondnum = num2;
}

int Complex::getFirst()
{
	return firstnum;
}

int Complex::getSecond()
{
	return secondnum;
}

Complex Complex::Add(Complex C)
{
	Complex res;
	res.firstnum = firstnum + C.firstnum;
	res.secondnum = secondnum + C.secondnum;

	return res;
}

Complex Complex::Sub(Complex C)
{
	Complex res;
	res.firstnum = firstnum - C.firstnum;
	res.secondnum = secondnum - C.secondnum;
	return res;
}

Complex Complex::Mul(Complex C)
{
	Complex res;
	res.firstnum = firstnum * C.firstnum;
	res.secondnum = secondnum * C.secondnum;
	return res;
}

Complex Complex::Div(Complex C)
{
	Complex res;
	res.firstnum = firstnum / C.firstnum;
	res.secondnum = secondnum / C.secondnum;
	return res;
}

void Complex::show()
{
	cout << getFirst() << " , " << getSecond() << endl;
}
