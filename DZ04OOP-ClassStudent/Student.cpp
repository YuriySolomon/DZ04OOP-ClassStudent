#include "Student.h"

Student::Student() : Student("Ivan", "Didenko", "Vladimirovich", "st. Dacha kovalevskogo 131", "+38 (097) 123-45-67") {}

Student::Student(const char* name, const char* surname, const char* phone) : Student(name, surname, "Vladimirovich", "st. Dacha kovalevskogo 131", phone) {}

Student::Student(const char* name, const char* surname, const char* otchestvo, const char* address, const char* phone)
{
	SetName(name);
	SetSurname(surname);
	SetOtchestvo(otchestvo);
	//SetBirthday(birthday);
	SetAddress(address);
	SetPhone(phone);	
}

Student::Student(const Student& original)
{
	SetName(original.name);
	SetSurname(original.surname);
	SetOtchestvo(original.otchestvo);
	//SetBirthday(original.birthday);
	SetAddress(original.address);
	SetPhone(original.phone);
}

Student::~Student()
{
	if (name != nullptr) delete[] name;
	if (surname != nullptr) delete[] surname;
	if (otchestvo != nullptr) delete[] otchestvo;
	if (address != nullptr) delete[] address;
	if (phone != nullptr) delete[] phone;
}
void Student::SetName(const char* name) // ������ �� ���� �����
{
	if (strlen(name) == 0)
	{
		throw "�� �� ����� ��� ��������!\n";
	}
	this->name = new char[size];
	strcpy_s(this->name, size - 1, name);
}

void Student::SetSurname(const char* surname) // ������ �� ���� �����
{
	if (strlen(surname) == 0)
	{
		throw "�� �� ����� ������� ��������!\n";
	}
	this->surname = new char[size];
	strcpy_s(this->surname, size - 1, surname);
}

void Student::SetOtchestvo(const char* otchestvo) // ������ �� ���� ��������
{
	if (strlen(otchestvo) == 0)
	{
		throw "�� �� ����� �������� ��������!\n";
	}
	this->otchestvo = new char[size];
	strcpy_s(this->otchestvo, size - 1, otchestvo);
}

//void Student::SetBirthday(Date birthday) // ������ �� ���� ������
//{
//	if (birthday.day < 0 && birthday.day > 31)
//	{
//		throw "�� �� ����� ������������ ����!\n";
//	}
//	this->birthday = birthday;
//}

void Student::SetAddress(const char* address) // ������ �� ���� ������
{
	if (strlen(address) == 0)
	{
		throw "�� �� ����� ������ ��������!\n";
	}
	this->address = new char[size];
	strcpy_s(this->address, size - 1, address);
}

void Student::SetPhone(const char* phone) // ������ �� ���� ������
{
	if (strlen(phone) == 0)
	{
		throw "�� �� ����� ������� ��������!\n";
	}
	this->phone = new char[size];
	strcpy_s(this->phone, size - 1, phone);
}

void Student::SetZachot(const int* zachot) // ������ �� �������� ������ �� �������
{
	
	this->zachot = new short[size];
	
}

void Student::SetKursach(const int* kursach) // ������ �� �������� ������ �� ������
{
	this->kursach = new short[size];
}
void Student::SetExams(const int* exams) // ������ �� �������� ������ �� ��������
{
	this->exams = new short[size];
}

string Student::GetName() const //���������� ��� ��������
{
	return name;
}

string Student::GetSurname() const //���������� ������� ��������
{
	return surname;
}

string Student::GetOtchestvo() const //���������� �������� ��������
{
	return otchestvo;
}

//Date Student::GetBirthday() const //���������� ���� �������� ��������
//{
//	return birthday;
//}

string Student::GetAddress() const //���������� ������ ��������
{
	return address;
}

string Student::GetPhone() const //���������� ���������� ����� ��������
{
	return phone;
}

short* Student::GetZachot() const //���������� ������ �� �������
{
	return zachot;
}
short* Student::GetKursach() const //���������� ������ �� ������
{
	return kursach;
}
short* Student::GetExams() const //���������� ������ �� ��������
{
	return exams;
}

void Student::ShowStudent() // ����� ���� ����� ������� �������
{
	cout << GetName() << "\n";
	cout << GetSurname() << "\n";
	cout << GetOtchestvo() << "\n";
	//cout << GetBirthday() << "\n";
	cout << GetAddress() << "\n";
	cout << GetPhone() << "\n";
	cout << GetZachot() << "\n";
}