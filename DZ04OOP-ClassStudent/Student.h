#pragma once
#include "AllLibraries.h"
#include "Date.h"

class Student
{
private:
	char* name;
	char* surname;
	char* otchestvo;
	Date birthday;
	char* address;
	char* phone;
	short* zachot = nullptr; // оценки по зачетам
	short* kursach = nullptr; // оценки за курсач
	short* exams = nullptr; // оценки за экзамены
	unsigned short size = 50; // количество символов в массивах
	short zachot_count = 0; // общее количесво оценок за зачет
	short kursach_count = 0; // общее количесво оценок за курсач
	short exams_count = 0; // общее количесво оценок за экзамены

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
	void SetZachot(const short grade); // Сеттер на создание оценок по зачетам
	void SetKursach(const short grade); // Сеттер на создание оценок за курсач
	void SetExams(const short grade); // Сеттер на создание оценок за экзамены
	string GetName() const; //Показывает имя студента
	string GetSurname() const; //Показывает фамилии студента
	string GetOtchestvo() const; //Показывает отчество студента
	//Date GetBirthday() const; //Показывает дату рождения студента
	string GetAddress() const; //Показывает адресс студента
	string GetPhone() const; //Показывает телефонный номер студента
	void GetZachot(); //Показывает оценки по зачетам
	void GetKursach(); //Показывает оценки за курсач
	void GetExams(); //Показывает оценки за экзамены
	void ShowStudent(); // показ всех полей объекта студент	
};

