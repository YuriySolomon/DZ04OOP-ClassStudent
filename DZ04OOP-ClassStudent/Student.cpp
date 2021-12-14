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
void Student::SetName(const char* name) // Сеттер на ввод имени
{
	if (strlen(name) == 0)
	{
		throw "Вы не ввели имя студента!\n";
	}
	this->name = new char[size];
	strcpy_s(this->name, size - 1, name);
}

void Student::SetSurname(const char* surname) // Сеттер на ввод имени
{
	if (strlen(surname) == 0)
	{
		throw "Вы не ввели фамилию студента!\n";
	}
	this->surname = new char[size];
	strcpy_s(this->surname, size - 1, surname);
}

void Student::SetOtchestvo(const char* otchestvo) // Сеттер на ввод отчества
{
	if (strlen(otchestvo) == 0)
	{
		throw "Вы не ввели отчество студента!\n";
	}
	this->otchestvo = new char[size];
	strcpy_s(this->otchestvo, size - 1, otchestvo);
}

//void Student::SetBirthday(Date birthday) // Сеттер на ввод адреса
//{
//	if (birthday.day < 0 && birthday.day > 31)
//	{
//		throw "Вы не ввели неправильный день!\n";
//	}
//	this->birthday = birthday;
//}

void Student::SetAddress(const char* address) // Сеттер на ввод адреса
{
	if (strlen(address) == 0)
	{
		throw "Вы не ввели адресс студента!\n";
	}
	this->address = new char[size];
	strcpy_s(this->address, size - 1, address);
}

void Student::SetPhone(const char* phone) // Сеттер на ввод адреса
{
	if (strlen(phone) == 0)
	{
		throw "Вы не ввели телефон студента!\n";
	}
	this->phone = new char[size];
	strcpy_s(this->phone, size - 1, phone);
}

void Student::SetZachot(const int* zachot) // Сеттер на создание оценок по зачетам
{
	
	this->zachot = new short[size];
	
}

void Student::SetKursach(const int* kursach) // Сеттер на создание оценок за курсач
{
	this->kursach = new short[size];
}
void Student::SetExams(const int* exams) // Сеттер на создание оценок за экзамены
{
	this->exams = new short[size];
}

string Student::GetName() const //Показывает имя студента
{
	return name;
}

string Student::GetSurname() const //Показывает фамилии студента
{
	return surname;
}

string Student::GetOtchestvo() const //Показывает отчество студента
{
	return otchestvo;
}

//Date Student::GetBirthday() const //Показывает дату рождения студента
//{
//	return birthday;
//}

string Student::GetAddress() const //Показывает адресс студента
{
	return address;
}

string Student::GetPhone() const //Показывает телефонный номер студента
{
	return phone;
}

short* Student::GetZachot() const //Показывает оценки по зачетам
{
	return zachot;
}
short* Student::GetKursach() const //Показывает оценки за курсач
{
	return kursach;
}
short* Student::GetExams() const //Показывает оценки за экзамены
{
	return exams;
}

void Student::ShowStudent() // показ всех полей объекта студент
{
	cout << GetName() << "\n";
	cout << GetSurname() << "\n";
	cout << GetOtchestvo() << "\n";
	//cout << GetBirthday() << "\n";
	cout << GetAddress() << "\n";
	cout << GetPhone() << "\n";
	cout << GetZachot() << "\n";
}
