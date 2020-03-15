// MutableTable.h
#include "Lexeme.h"
#include <string>
#include <unordered_map>
using std::unordered_map;
using std::string;

class MutableTable
{
private:
	unordered_map<string, Lexeme> hashtable;
public:
	// ���������� �������������� �� �����
	bool add(string name);
	bool add(Lexeme lexeme);
	// ��������� ����
	bool set_type(string name, string type);
	bool set_type(int bucket, int num, string type);
	// ��������� ������� ��������
	bool set_init_status(string name, bool status);
	bool set_init_status(int bucket, int num, bool status);
	// ����� �������� � ������� �� �����
	bool find(string name);
	// ��������� ����
	bool get_type(string name, string &type);
	bool get_type(int bucket, int num, string& type);
	// ��������� ������� ��������
	bool get_init_status(string name, bool& status);
	bool get_init_status(int bucket, int num, bool& status);
	// ��������� �������
	bool get_lexeme(string name, Lexeme &lexeme);
	bool get_lexeme(int bucket, int num, Lexeme& lexeme);
	// ��������� ������ �������������� (����� �������, ����� � �������)
	bool get_address(string name, int &bucket, int &num);
};