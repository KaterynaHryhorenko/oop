#include <iostream>
#include "interfaces.cpp"

#include "client.cpp"
using namespace std;

class table {
private:
	int number;

	bool status = 0;
	int numberOfPlaces;
public:
	//setter
	void getCharachteritics(int num, const int size = 4) {
		numberOfPlaces = size;
		number = num;
	}
	//method
	void ChangeStatus(int new_status) {
		status = new_status;
	}
	void FreeTable(table table1, int NeedNumberOfSeats) {
		if (table1.status == 0) {
			if (NeedNumberOfSeats == table1.numberOfPlaces) {
				std::cout <<
					table1.number << '/' << table1.numberOfPlaces << '\n';
			}
		}
	}
	//getter
	int NumberOfTable() {
		return number;
	}
	int StatusOfTable() {
		return status;
	}
	int NumberOfPlace() {
		return numberOfPlaces;
	}
};



class restorant {
private:
	string place;
protected:
	table* tables = new table[21];
public:
	void setPlaces() {
		place = 'a';
	}
	void GetTables(table* tables) {
		for (int i = 1; i <= 5; i++)
			tables[i].getCharachteritics(i);
	}
	void SetTables() {
		delete[] tables;
	}
	void FreeTables(int NeedNumberOfSeats,table* tables) {
		cout << "number of free table /quantity of places ";
		for (int i = 1; i <= 5; i++) {
			tables[i].FreeTable(tables[i], NeedNumberOfSeats);
		}
	}
	void ChangeStatus(int number, int new_status) {
		tables[number].ChangeStatus(new_status);
	}
	string GetPlace() {
		return place;
	}
};

class waiter : public Ideleter, public Iadder {
protected:
	restorant my_restoran;
public:
	void  add_item(table * tables) {
		int num_p;//number places
		int num_t;//number table
		client client1;
		
		num_p = client1.client_number_of_places();
		//my_restoran.GetTables(tables);//плохая идея нужно чуть подумать
		my_restoran.FreeTables(num_p, tables);
		num_t = client1.client_table();
		my_restoran.ChangeStatus(num_t, 1);
	}
	int give_cheque() {//do work 
		// client need eat
		//vector client dishes(){}?
		// wile menu doesnt end if vector_order[name] == vector_menu[name]
		//return sum
	}
	void delete_item() override {
		restorant rest;
		client client1;
		//delete_reserved_table
		client1.give_cheque();
		//client ended returns number of table 
		rest.ChangeStatus(5, 0);
	}
};

int main() {
	waiter new_waiter;
	restorant rest;
	
	table tables[6];
	rest.GetTables(tables);
	new_waiter.additem(tables);
		return 0;
}