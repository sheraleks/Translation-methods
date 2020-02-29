#include "Lexeme.h"
#include <string>
#include <map>
using std::map;
using std::string;

class MutableTable
{
private:
	map<string, Lexeme> hashtable;
public:
	Lexeme find(string name);
	bool add(Lexeme lexeme);
	string get_type(string name);
	bool set_type(string name, string type);
	string get_value(string name);
	bool set_value(string name, string value);
	MutableTable();
};