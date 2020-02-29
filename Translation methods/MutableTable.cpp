// MutableTable.cpp
#include "MutableTable.h"

MutableTable::MutableTable()
{
}

bool MutableTable::find(string name)
{
	auto found = this->hashtable.find(name);
	if (found != this->hashtable.end())
	{
		return true;
	}
	return false;
}

Lexeme MutableTable::get_lexeme(string name)
{
	auto found = this->hashtable.find(name);
	if (found != this->hashtable.end())
	{
		return this->hashtable[name];
	}
	return Lexeme();
}

bool MutableTable::add(Lexeme lexeme)
{
	string lex_name = lexeme.name;
	auto found = this->hashtable.find(lex_name);
	if (found != this->hashtable.end())
	{
		return false;
	}
	this->hashtable[lex_name] = lexeme;
	return true;
}
bool MutableTable::add(string name)
{
	auto found = this->hashtable.find(name);
	if (found != this->hashtable.end())
	{
		return false;
	}
	this->hashtable[name] = Lexeme();
	this->hashtable[name].name = name;
	return true;
}

string MutableTable::get_type(string name)
{
	auto found = this->hashtable.find(name);
	if (found == this->hashtable.end())
	{
		return string();
	}
	return this->hashtable[name].type;
}

bool MutableTable::set_type(string name, string type)
{
	auto found = this->hashtable.find(name);
	if (found == this->hashtable.end())
	{
		return false;
	}
	this->hashtable[name].type = type;
	return true;
}

string MutableTable::get_value(string name)
{
	auto found = this->hashtable.find(name);
	if (found == this->hashtable.end())
	{
		return string();
	}
	return this->hashtable[name].value;
}

bool MutableTable::set_value(string name, string value)
{
	auto found = this->hashtable.find(name);
	if (found == this->hashtable.end())
	{
		return false;
	}
	this->hashtable[name].value = value;
	return true;
}