
#include <string>
#include <vector>
#include <iostream>
#include <regex>
#include "prods_in_storage.cpp"
using namespace std;
class customerException{
private:
    char* msg;
public:
    customerException(char* masg){
        msg=masg;
    }
    char* getmsg(){
        cout<< msg;
    }
    string product_name_control(){
        string product_name;

        try
        {
            cout << "enter product name: ";
            getline(cin, product_name);

            regex r("([a-z])\w+\s");

            if (regex_match(product_name, r)) {
                throw customerException("product's name wrong");
            }
        }
        catch (customerException &ex)
        {
            cout << ex.getmsg() << endl;
        }
        return product_name;
    }
    int Self_life_control(){
        int shelf_life;

        try
        {
            cout << "enter shelf_life: ";
            cin >> shelf_life;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(32767, '\n');
                throw customerException("shelf life consist only numbers");
            }
            if (shelf_life > 1000) {
                throw customerException("shelf life must be under 1000!" );
            }
        }
        catch (customerException &ex)
        {
            ex.getmsg() ;
        }
        return shelf_life;
    }
    string Place_order_control(){
        string place_order;
        try
        {

            regex r("([A-Z]){3}\d{3}");
            cout << "enter place_order: ";
            getline(cin, place_order);
            if (!regex_match(place_order, r)) {
                throw customerException("place orderis wrong");
            }
        }
        catch (customerException &ex)
        {
            cout << ex.getmsg()  << endl;
        }
    return place_order;
    };
    int Amount_control(){
        int amount;
        try
        {
            cout << "enter amount: ";
            cin >> amount;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(32767, '\n');
                throw customerException("amount consist only numbers");
            }
            if (amount > 1000) {
                throw customerException("amount must be under 1000");
            }
        }
        catch (customerException &ex)
        {
            cout << ex.getmsg()  << endl;
        }
        return amount;
    }
    int Temperature_control(){
        int temperature;
        try
        {
            cout << "enter temperature: ";
            cin >> temperature;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(32767, '\n');
                throw customerException("temperature consist only numbers");
            }
            if (temperature > 100) {
                throw customerException("temperature must be under 100");
            }
        }
        catch (customerException &ex)
        {
            cout << ex.getmsg()  << endl;
        }
        return temperature;
    }
    int Humidity_control(){
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
                throw customerException("humidity consist only numbers");
            }
            if (humidity > 100) {
                throw customerException("humidity must be under 100");
            }
        }
        catch (customerException &ex)
        {
            cout << ex.getmsg()  << endl;
        }
        return humidity;
    }
};


int main() {

    fruit apple;
customerException c(0);
    apple.Construct_product("PB664", 23, 5, c.product_name_control(), 6, 12);
    vegetable cucumber;
    cucumber.Construct_product("PB098", 76, 45, "Cucumber", 7, 23);

    //using pointers because type is abstract
    storage stor;
    stor.prods_in_storage(&cucumber);
    stor.prods_in_storage(&apple);
    vector<abstract_product*> prod_in_storage = stor.Products();

    //iterator for vector
    for(vector<abstract_product*>:: iterator p = prod_in_storage.begin(); p!=prod_in_storage.end(); p++){
        string name = (*p) -> GetProductName();
        cout << name<<endl;
    }

    return 0;
}


