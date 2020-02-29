#include <set>
#include <string>
#include <fstream>
using std::set;
using std::string;

class ConstantTable
{
private:
	set<string> table;
	void add(string element);
public:
	void load(string filename);
	bool find(string element);
	ConstantTable();
};