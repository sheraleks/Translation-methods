// ConstantTable.cpp
#include "ConstantTable.h"

ConstantTable::ConstantTable(string filename)
{
	std::ifstream fin(filename);
	string buffer;
	while (!fin.eof())
	{
		fin >> buffer;
		this->table.insert(buffer);
	}
	fin.close();
}

bool ConstantTable::find(string value)
{
	return this->table.find(value) != this->table.end();
}