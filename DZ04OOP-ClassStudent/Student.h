#pragma once
#include "AllLibraries.h"

class Date
{
	short day;
	short month;
	short year;
};

class Student
{
private:
	char* name;
	char* surname;
	char* otchestvo;
	Date birthday;
	char* address;
	char* phone;
	short* zachot; // оценки по зачетам
	short* kursach; // оценки за курсач
	short* exams; // оценки за экзамены
	unsigned short size = 50;

public:
	Student();
	Student(const char* name, const char* surname, const char* phone);
	Student(const char* name, const char* surname, const char* otchestvo, const char* address, const char* phone);
	Student(const Student& original);
	~Student();
	void SetName(const char* name); // Сеттер на ввод имени
	void SetSurname(const char* surname); // Сеттер на ввод имени
	void SetOtchestvo(const char* otchestvo); // Сеттер на ввод отчества
	//void SetBirthday(Date birthday);
	void SetAddress(const char* address); // Сеттер на ввод адреса
	void SetPhone(const char* phone); // Сеттер на ввод адреса
	void SetZachot(const int* zachot); // Сеттер на создание оценок по зачетам
	void SetKursach(const int* kursach); // Сеттер на создание оценок за курсач
	void SetExams(const int* exams); // Сеттер на создание оценок за экзамены
	string GetName() const; //Показывает имя студента
	string GetSurname() const; //Показывает фамилии студента
	string GetOtchestvo() const; //Показывает отчество студента
	//Date GetBirthday() const; //Показывает дату рождения студента
	string GetAddress() const; //Показывает адресс студента
	string GetPhone() const; //Показывает телефонный номер студента
	short* GetZachot() const; //Показывает оценки по зачетам
	short* GetKursach() const; //Показывает оценки за курсач
	short* GetExams() const; //Показывает оценки за экзамены
	void ShowStudent(); // показ всех полей объекта студент	
};

