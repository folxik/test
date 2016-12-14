#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
float waga, wzrost,bmi;
       cout << "Podaj wzrost(cm): ";
	   cin >> wzrost;
	   cout << "Podaj wage(kg): ";
	   cin >> waga;
	   bmi = waga / (wzrost*wzrost/10000.); 
	   cout << "Twoje BMI wynosi:" << endl;
	   cout << bmi << endl;
  
if(bmi < 18.5)
{
cout << "niedowaga" << endl;
}
 
if(bmi > 18.5 and bmi < 25)
{
cout << "normalna waga" << endl;
}
if(bmi > 25 and bmi < 30 )
{
cout << "nadwaga" << endl;
}
if(bmi > 30)
{
cout << "otylosc" << endl;
}
getch ();
}
