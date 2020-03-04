// ConstantTable.h
#include <set>
#include <string>
#include <fstream>
using std::set;
using std::string;

class ConstantTable
{
private:
	set<string> table;
public:
	// find by value
	bool find(string value, int &index);
	// find by index
	bool find(int index, string &value);
	ConstantTable(string filename);
};