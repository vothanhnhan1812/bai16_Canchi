#include <iostream>
using namespace std;
int main()
{
	int nam, socan, sochi;
	cout << "nhap nam: "; cin >> nam;
	cin >> socan, sochi;
	//Create an array of strings
	string can[] = { "canh","tan","nham","quy"," giap "," at "," binh "," dinh "," mau "," ki " };
	string chi[] = { " than "," dau "," tuat "," hoi "," ti "," suu "," dan "," mao "," thinh "," ti "," ngo "," mui " };

	// loop through strings 
	socan = nam % 10;
	sochi = nam % 12;
	cout << can[socan];
	cout << chi[sochi];
	return 0;
}