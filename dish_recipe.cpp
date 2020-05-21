#include <iostream>
#include <vector>
#include <string>
using namespace std;


class recipe {
private:
	string dish_name;
	int time_cooking;
	vector<string> prods_in_recipe;
	vector<int> amount;
	class Dish {
	public:
		string dish_name;
		int time_cooking;
		vector<string> prods_in_dish;
		vector<int> amount;
		//setter
		void change_dish_time_cooking(int time) { time_cooking = time; }
	};
	Dish dish;
public:
	//constructor
	recipe(string name) {
		dish_name = name;
		dish.dish_name = dish_name;
		time_cooking = 1800;
		dish.time_cooking = time_cooking;
		prods_in_recipe = { "apple", "vanilla", "sugar", "cinnamon" };
		dish.prods_in_dish = prods_in_recipe;
		amount = { 1,2,3,1 };
		dish.amount = amount;
	}
	void change_dish_time_cooking(int time) { dish.change_dish_time_cooking(time); }
	//getter
	vector<string> prods_in_dish() { return dish.prods_in_dish; }
	vector<int> amount_in_dish() { return dish.amount; }
};

/*
int main(){
	recipe apples("apples");
	apples.change_dish_time_cooking(1600);

	vector<int> amount_products = apples.amount_in_dish();
	vector<string> prods_in = apples.prods_in_dish();
	for (int i = 0; i < amount_products.size(); i++) { cout << amount_products[i] << " "; cout << prods_in[i] << endl; }
	return 0;
}

*/
