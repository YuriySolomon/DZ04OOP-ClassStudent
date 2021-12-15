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
	if (zachot != nullptr) delete[] zachot;
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

void Student::SetBirthday(short day, short month, short year) // Сеттер на ввод адреса
{
	birthday.SetDay(day);
	birthday.SetMonth(month);
	birthday.SetYear(year);
}

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

void Student::SetZachot(const short grade) // Сеттер на создание оценок по зачетам
{
	short* temp = new short[zachot_count + 1];
	for (int i = 0; i < zachot_count; i++)
	{
		temp[i] = zachot[i];
	}
	temp[zachot_count] = grade;
	delete[] zachot;
	zachot = temp;
	zachot_count++;	
}

void Student::SetKursach(const short grade) // Сеттер на создание оценок за курсач
{
	short* temp = new short[kursach_count + 1];
	for (int i = 0; i < kursach_count; i++)
	{
		temp[i] = kursach[i];
	}
	temp[kursach_count] = grade;
	delete[] kursach;
	kursach = temp;
	kursach_count++;
} 

void Student::SetExams(const short grade) // Сеттер на создание оценок за экзамены
{
	short* temp = new short[exams_count + 1];
	for (int i = 0; i < exams_count; i++)
	{
		temp[i] = exams[i];
	}
	temp[exams_count] = grade;
	delete[] exams;
	exams = temp;
	exams_count++;
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

void Student::GetBirthday() const //Показывает дату рождения студента
{
	cout << birthday.GetDate() << ":" << birthday.GetMonth() << ":" << birthday.GetYear();
}

string Student::GetAddress() const //Показывает адресс студента
{
	return address;
}

string Student::GetPhone() const //Показывает телефонный номер студента
{
	return phone;
}

void Student::GetZachot() //Показывает оценки по зачетам
{
	for (int i = 0; i < zachot_count; i++)
	{
		cout << zachot[i] << ", ";
	}
}

void Student::GetKursach() //Показывает оценки за курсач
{
	for (int i = 0; i < kursach_count; i++)
	{
		cout << kursach[i] << ", ";
	}
}

void Student::GetExams() //Показывает оценки за экзамены
{
	for (int i = 0; i < exams_count; i++)
	{
		cout << exams[i] << ", ";
	}
}

void Student::ShowStudent() // показ всех полей объекта студент
{
	cout << GetName() << "\n";
	cout << GetSurname() << "\n";
	cout << GetOtchestvo() << "\n";
	GetBirthday();
	cout << "\n";
	cout << GetAddress() << "\n";
	cout << GetPhone() << "\n";
	GetZachot();
	cout << "\n";
	GetKursach();
	cout << "\n";
	GetExams();
	cout << "\n";
}
