#include <iostream>
#include <malloc.h>
using namespace std;

class table {
private:
	int number;

	bool status = 0;
	int numberOfPlaces;
public:
	//setter
	void getCharachteritics(int num, const int size=4) {
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
	void GetTables() {
		for (int i = 1; i <= 5; i++)
			tables[i].getCharachteritics(i);

	}
	void SetTables() {
		delete[] tables;
	}
	void FreeTables(int NeedNumberOfSeats) {
		cout << "number of free table /quantity of places ";
		for (int i = 1; i <= 20; i++) {
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
