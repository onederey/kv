#include <iostream>
#include <math.h>
using namespace std;

void sinus(double x)
{
	double n = 0, u = x, n5 = 0;
	double x2 = x * x;
	double sum = u;
	while (u > 0.000001 || u < -0.000001)
	{
		u *= (-1)*(x2 / ((2*n+3)*(2*n+2)));
		sum += u;
		n++;
	}

	printf("%lf", sum);
	cout << endl;

	n5 = sin(x);
	cout << n5 << endl;
}

void cosinus(double x)
{
	double n = 0, u = 1, n5 = 0;
	double x2 = x * x;
	double sum = u;
	while (u > 0.000001 || u < -0.000001)
	{
		u *= (-1)*(x2 / ((2 * n + 2)*(2 * n + 1)));
		sum += u;
		n++;
	}

	printf("%lf", sum );
	cout << endl;

	n5 = cos(x);
	cout << n5 << endl;
}

void lnln(double x)
{
	double n = 1, u = x, n5 = 0;

	double sum = u;
	while (u > 0.000001 || u < -0.000001)
	{
		u *= ((-1)*x * n) / (n + 1);
		sum += u;
		n++;
	}

	printf("%lf", sum);
	cout << endl;
	n5 = log(1+x);
	printf("%lf", n5);
	cout << endl;
}

void eee(double x)
{
	double n = 1, u = x, n5 = 0;

	double sum = u + 1;
	while (u > 0.000001)
	{
		u *= x / (n + 1);
		sum += u;
		n++;
	}

	printf("%lf", sum);
	cout << endl;
	n5 = pow(2.7182818, x);
	printf("%lf", n5);
	cout << endl;
}

int main()
{
	/*double h1 = 0.5, step = 0.25;

	//double c[6] = { 1.087, -1.243, 0.656, -0.783, 2.574, 0.564};
	double c[6] = { 0.564, 2.574, -0.783, 0.656, -1.243, 1.087 };
	double m = c[5];

	for (int i = 0; i < 6; i++)
	{
		for (int j = 4; j >= 0; j--)
		{
			m = m * h1 + c[j];
		}
		if (h1 < 2)
		{
			h1 += step;
		}
		cout << m << " ";
		m = c[5];
	}
	cout << endl;
	h1 = 0.5;
	m = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			m += c[j] * pow(h1, j);
		}
		cout << m << " ";
		if (h1 < 2)
		{
			h1 += step;
		}
		m = 0;
	}*/




	double x1 = 0.716 + 0.043 * 14, x2 = 2.834 - 0.028 * 14;
	double x3 = 0.232 + 0.012 * 14, x4 = 0.747 - 0.014 * 14;
	double x5 = 0.122 + 0.018 * 14;

	cout << "e^x:" << endl;
	eee(x1);
	eee(x2);
	cout << endl;

	cout << "sin(x):" << endl;
	sinus(x3);
	sinus(x4);
	cout << endl;

	cout << "cos(x):" << endl;
	cosinus(x3);
	cosinus(x4);
	cout << endl;

	cout << "ln(1 + x):" << endl;
	lnln(x5);
	cin >> x1;
}
