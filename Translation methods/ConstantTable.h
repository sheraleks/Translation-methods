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
	bool find(string element);
	ConstantTable(string filename);
};