#include "ConstantTable.h"
#include <iostream>
using std::cout;

void main()
{
	ConstantTable<string> table;
	table.add("int");
	table.add("float");
	table.add("double");
	cout << table.is_in_table("double");
}