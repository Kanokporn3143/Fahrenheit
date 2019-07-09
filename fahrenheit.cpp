#include <iostream>
using namespace std;
void main ()
{
	float c;
	float f;

	cout << " Enter Celsius temperature : ";
	cin >> c;
	f = (1.8*c)+32;
	cout << " Fahrenheit = " << f << endl;
	cout << " Now weather in Thailand is ";
	cout << ((f >= 70) ? " Hot " : " Cool " ) << endl;

	system("pause");
	
}
