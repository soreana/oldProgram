#include <iostream>
#include <string>
using namespace std;

class person {
public:
	person( string n , string c) : name(n) , nat_code(c) {}

	string get_name() { return name;}
	string get_nat_code() { return nat_code;}
private:
	string name;
	string nat_code;
}; // end class person
