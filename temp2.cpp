#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float c,f;
	cout << "podaj temperature w celsjuszach: ";
	cin >> c; 
	f=(32+(9/5)*c);
	cout << "temperatura w farenheitach wynosi: " << f << endl;
	getchar();
}
