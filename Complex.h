class Complex
{
public:
	Complex(int = 0, int = 0);
	void SetComplex(int, int);

	void SetFirstnum(int);
	void SetSecondnum(int);
	int getFirst();
	int getSecond();

	Complex Add(Complex);
	Complex Sub(Complex);
	Complex Mul(Complex);
	Complex Div(Complex);

	void show();

private:
	int firstnum, secondnum;

};