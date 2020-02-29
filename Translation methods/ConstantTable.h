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
	bool find_by_num(int num, T &value);
	int find_by_value(T value);
	ConstantTable();
	~ConstantTable();
};

template <typename T>
ConstantTable<T>::ConstantTable()
{}

template <typename T>
ConstantTable<T>::~ConstantTable()
{
	this->table.clear();
}

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

template <typename T>
bool ConstantTable<T>::find_by_num(int num, T &value)
{
	if (num < this->table.size())
	{
		value = *std::next(this->table.begin(), num);
		return true;
	}
	return false;
}

template <typename T>
int ConstantTable<T>::find_by_value(T value)
{
	auto found = this->table.find(value);
	int index = std::distance(this->table.begin(), found);
	return found != this->table.end() ? index : -1;
}