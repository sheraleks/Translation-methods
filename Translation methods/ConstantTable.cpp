#include "ConstantTable.h"

ConstantTable::ConstantTable()
{}

void ConstantTable::add(string value)
{
	this->table.insert(value);
}

bool ConstantTable::find(string value)
{
	return this->table.find(value) != this->table.end();
}

void ConstantTable::load(string filename)
{
	std::ifstream fin(filename);
	string buffer;
	while (!fin.eof())
	{
		fin >> buffer;
		this->add(buffer);
	}
	fin.close();
}