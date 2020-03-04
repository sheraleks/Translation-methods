#include "ConstantTable.h"
//#include "MutableTable.h"
#include <iostream>
using std::cout;
using std::string;

void const_test()
{
	ConstantTable table("const.txt");
	int index;
	bool test = table.find("this", index);
	string value;
	bool test1 = table.find(20, value);
	return;
}

//void mutable_test()
//{
//	MutableTable table;
//	table.add(Lexeme { "int", "var", "5" });
//	table.add(Lexeme { "float", "num", "87.8" });
//	table.add(Lexeme { "char", "letter", "A" });
//	table.add("num1");
//	string type_test = table.get_type("var");
//	bool set_type_test = table.set_type("num1", "float");
//	bool set_type_test1 = table.set_type("n", "float");
//	string value_test = table.get_value("letter");
//	bool set_value_test = table.set_value("num1", "799.1");
//	bool set_value_test1 = table.set_value("n", "21.7");
//	Lexeme test_lexeme = table.get_lexeme("num");
//	Lexeme test_lexeme1 = table.get_lexeme("n");
//	return;
//}

void main()
{
	const_test();
}