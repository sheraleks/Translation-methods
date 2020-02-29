#include "ConstantTable.h"
#include "MutableTable.h"
#include <iostream>
using std::cout;

void const_test()
{
	ConstantTable table;
	table.load("types.txt");
	bool in = table.find("double");
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
	const_test();
}