#include "ConstantTable.h"
#include "MutableTable.h"
#include <iostream>
using std::cout;

void const_test()
{
	ConstantTable table("const.txt");
	int index;
	bool test = table.find("this", index);
	string value;
	bool test1 = table.find(20, value);
}

void mutable_test()
{
	MutableTable table;
	table.add("a");
	table.set_type("a", "char");
	table.add("integer");
	table.add("number");
	table.add("hello_str");
	int bucket, num;
	table.get_address("a", bucket, num);
	table.add("integer12");
	table.add("number12");
	table.add("hello_str12");
	table.add("letter12");
	table.get_address("a", bucket, num);
	Lexeme lexeme;
	table.get_lexeme(100, num, lexeme);
}

void main()
{
	mutable_test();
}