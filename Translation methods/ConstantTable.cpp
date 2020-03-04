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

bool ConstantTable::find(string value, int &index)
{
	auto iter = this->table.find(value);
	if (iter != this->table.end())
	{
		index = std::distance(this->table.begin(), iter);
		return true;
	}
	return false;
}

bool ConstantTable::find(int index, string &value)
{
	int size = this->table.size();
	if (index < size)
	{
		value = *std::next(this->table.begin(), index);
		return true;
	}
	return false;
}