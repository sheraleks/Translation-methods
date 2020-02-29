#include <set>
#include <string>
using std::set;
using std::string;

template <typename T>
class ConstantTable
{
private:
	set<T> table;
public:
	// void load(string filename);
	void add(T element);
	bool is_in_table(T element);
	// string find_by_num(int num);
	// int find_by_value(string element);
	ConstantTable();
	// ~ConstantTable();
};

template <typename T>
ConstantTable<T>::ConstantTable()
{}

template <typename T>
void ConstantTable<T>::add(T element)
{
	this->table.insert(element);
}

template <typename T>
bool ConstantTable<T>::is_in_table(T element)
{
	return this->table.find(element) != this->table.end();
}