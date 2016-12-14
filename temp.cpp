#include <iostream>
#include <conio.h>
using namespace std;
float temp1 (float c)
{
	return (32+9/5*c);
}

float temp2 (float k)
{
	return (273.15+k);
	
}


int main() 
{
	int c, k, b;
	cout << "wybierz skale temperatur" << endl;
	cout << "1.Fahrenhaity" << endl;
	cout << "2.Kelwiny" << endl;
	cin >> b;
	switch (b)
	{
		case 1:
			cout << "podaj stopnie celsjuszach" << endl;
			cin >> c;
			cout << "temperatura w fahrenhaitach wynosi " << temp1(c);
			break;
		case 2:
				cout << "podaj stopnie celsjuszach" << endl;
			cin >> k;
			cout << "temperatura w kelwinach wynosi " << temp2(k);
			break;
			
	}
	
	getch();
}
