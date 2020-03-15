// MutableTable.cpp
#include "MutableTable.h"

bool MutableTable::add(string name)
{
	auto found = this->hashtable.find(name);
	if (found != this->hashtable.end())	return false;
	this->hashtable[name] = Lexeme();
	this->hashtable[name].name = name;
	return true;
}

bool MutableTable::add(Lexeme lexeme)
{
	string lex_name = lexeme.name;
	auto found = this->hashtable.find(lex_name);
	if (found != this->hashtable.end())	return false;
	this->hashtable[lex_name] = lexeme;
	return true;
}

bool MutableTable::set_type(string name, string type)
{
	auto found = this->hashtable.find(name);
	if (found == this->hashtable.end()) return false;
	this->hashtable[name].type = type;
	return true;
}

bool MutableTable::set_type(int bucket, int num, string type)
{
	if (this->hashtable.bucket_count() < bucket) return false;
	auto bucket_iter = this->hashtable.begin(bucket);
	auto elem_iter = std::next(bucket_iter, num);
	if (elem_iter == this->hashtable.end(bucket)) return false;
	(*elem_iter).second.type = type;
	return true;
}

bool MutableTable::set_init_status(string name, bool status)
{
	auto found = this->hashtable.find(name);
	if (found == this->hashtable.end()) return false;
	this->hashtable[name].initialized = status;
	return true;
}

bool MutableTable::set_init_status(int bucket, int num, bool status)
{
	if (this->hashtable.bucket_count() < bucket) return false;
	auto bucket_iter = this->hashtable.begin(bucket);
	auto elem_iter = std::next(bucket_iter, num);
	if (elem_iter == this->hashtable.end(bucket)) return false;
	(*elem_iter).second.initialized = status;
	return true;
}

bool MutableTable::find(string name)
{
	auto found = this->hashtable.find(name);
	if (found != this->hashtable.end()) return true;
	return false;
}

bool MutableTable::get_address(string name, int& bucket, int& num)
{
	auto found = this->hashtable.find(name);
	if (found == this->hashtable.end()) return false;
	bucket = this->hashtable.bucket(name);
	auto bucket_begin = this->hashtable.begin(bucket);
	num = std::distance(bucket_begin, found);
	return true;
}

bool MutableTable::get_type(string name, string &type)
{
	auto found = this->hashtable.find(name);
	if (found == this->hashtable.end())	return false;
	type = this->hashtable[name].type;
	return true;
}

bool MutableTable::get_type(int bucket, int num, string &type)
{
	if (this->hashtable.bucket_count() < bucket) return false;
	auto bucket_iter = this->hashtable.begin(bucket);
	auto elem_iter = std::next(bucket_iter, num);
	if (elem_iter == this->hashtable.end(bucket)) return false;
	type = (*elem_iter).second.type;
	return true;
}

bool MutableTable::get_init_status(string name, bool &status)
{
	auto found = this->hashtable.find(name);
	if (found == this->hashtable.end())	return false;
	status = this->hashtable[name].initialized;
	return true;
}

bool MutableTable::get_init_status(int bucket, int num, bool &status)
{
	if (this->hashtable.bucket_count() < bucket) return false;
	auto bucket_iter = this->hashtable.begin(bucket);
	auto elem_iter = std::next(bucket_iter, num);
	if (elem_iter == this->hashtable.end(bucket)) return false;
	status = (*elem_iter).second.initialized;
	return true;
}

bool MutableTable::get_lexeme(string name, Lexeme &lexeme)
{
	auto found = this->hashtable.find(name);
	if (found == this->hashtable.end())	return false;
	lexeme = this->hashtable[name];
	return true;
}

bool MutableTable::get_lexeme(int bucket, int num, Lexeme& lexeme)
{
	if (this->hashtable.bucket_count() < bucket) return false;
	auto bucket_iter = this->hashtable.begin(bucket);
	auto elem_iter = std::next(bucket_iter, num);
	if (elem_iter == this->hashtable.end(bucket)) return false;
	lexeme = (*elem_iter).second;
	return true;
}