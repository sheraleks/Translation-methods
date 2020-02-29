#include "ConstantTable.h"
#include <iostream>
using std::cout;

void string_test()
{
	ConstantTable<string> table;
	table.add("int");
	table.add("float");
	table.add("double");
	bool in = table.is_in_table("double");
	int int_index = table.find_by_value("int");
	string int_str;
	table.find_by_num(10, int_str);
}

void main()
{
	string_test();
}