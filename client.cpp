
#include "try.cpp"
#include "dish_recipe.cpp"
#include <iostream>
using namespace std;

class client{
private:
	string name;
	int number_of_table;
	int number_of_places;
	string* dish[50];
public:
	int client_number_of_places() {
		cout << "enter number of places: ";
		cin >> number_of_places;
		return number_of_places; 
	};
	int client_table() {
		cout << "enter number of the table: ";
		cin >> number_of_table;
		return number_of_table;
	}
	vector<recipe*> client_dishes() {
		vector <string> dishes;
		string dish;
		/*do {MENU!!!!!
			cout << "enter dish your dish: ";
			cin >> dish;
			dishes.push_back(dish);
			cout << "";
		} while ();*/
	}
	bool give_cheque() {
		bool ans;
		cout << "Are you ended?";
		cin >> ans;
		return ans;
	}
};

