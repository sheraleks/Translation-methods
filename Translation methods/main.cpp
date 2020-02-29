#include "ConstantTable.h"
#include "MutableTable.h"
#include <iostream>
using std::cout;

void const_test()
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

void mutable_test()
{
	MutableTable m_table;
	Lexeme lexeme { "var", "int", "5" };
	m_table.add(lexeme);
	string type_test = m_table.get_type("var");
	bool set_type_test = m_table.set_type("var", "float");
}

void main()
{
	mutable_test();
}