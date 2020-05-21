

#include <string>
#include <vector>
#include <iostream>
#include "product.cpp"

using namespace std;
class storage {
private:
	//using pointers because type is abstract
	vector<abstract_product*> prod_in_storage;
public:
	void prods_in_storage(abstract_product* product) {
		prod_in_storage.push_back(product);

	}
	vector<abstract_product*> Products() { return prod_in_storage; }
};

