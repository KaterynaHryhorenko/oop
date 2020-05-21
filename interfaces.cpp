#include <iostream>

using namespace std;

class Ideleter {
public:
	void virtual delete_item() = 0;
};
class Iworker {
public:
	void virtual do_work() = 0;
};

class Iadder {
public:
	void virtual add_item()=0;
};