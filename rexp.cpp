#include <iostream>
#include <regex>
#include <string>
using namespace std;

int in() {
	string product_name;
	
	try
	{
		cout << "enter product name: ";
		getline(cin, product_name);

		regex r("([a-z])\w+\s");
		
		if (regex_match(product_name, r)) {
			throw 0;
		}
	}
	catch (int i)
	{
		cout << "Incorect enter" << endl;
	}
	string place_order;
	try
	{
		
		regex r("([A-Z]){3}\d{3}");
		cout << "enter place_order: ";
		getline(cin, place_order);
		if (!regex_match(place_order, r)) {
			throw 0;
		}
	}
	catch (int i)
	{
		cout << "Incorect enter" << endl;
	}
	int shelf_life;
	try
	{
		cout << "enter shelf_life: ";
		cin >> shelf_life;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			throw 0;
		}
		if (shelf_life > 1000) {
			throw 0;
		}
	}
	catch (int i)
	{
		cout <<"Incorect enter" << endl;
	}
	int amount;
	try
	{
		cout << "enter amount: ";
		cin >> amount;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			throw 0;
		}
		if (amount > 1000) {
			throw 0;
		}
	}
	catch (int i)
	{
		cout << "Incorect enter" << endl;
	}
	int temperature;
	try
	{
		cout << "enter temperature: ";
		cin >> temperature;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			throw 0;
		}
		if (temperature > 100) {
			throw 0;
		}
	}
	catch (int i)
	{
		cout << "Incorect enter" << endl;
	}
	int humidity;

	try
	{
		cout << "enter humidity: ";
		cin >> humidity;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			throw 0;
		}
		if (cin.fail()) 
		{
			cin.clear(); 
			cin.ignore(32767, '\n'); 
			throw 0;
		}
		if (humidity > 100) {
			throw 0;
		}
	}
	catch (...) {
		cout << "Incorect enter" << endl;
	}

	return 0;
}