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
	short* zachot; // ������ �� �������
	short* kursach; // ������ �� ������
	short* exams; // ������ �� ��������
	unsigned short size = 50;

public:
	Student();
	Student(const char* name, const char* surname, const char* phone);
	Student(const char* name, const char* surname, const char* otchestvo, const char* address, const char* phone);
	Student(const Student& original);
	~Student();
	void SetName(const char* name); // ������ �� ���� �����
	void SetSurname(const char* surname); // ������ �� ���� �����
	void SetOtchestvo(const char* otchestvo); // ������ �� ���� ��������
	//void SetBirthday(Date birthday);
	void SetAddress(const char* address); // ������ �� ���� ������
	void SetPhone(const char* phone); // ������ �� ���� ������
	void SetZachot(const int* zachot); // ������ �� �������� ������ �� �������
	void SetKursach(const int* kursach); // ������ �� �������� ������ �� ������
	void SetExams(const int* exams); // ������ �� �������� ������ �� ��������
	string GetName() const; //���������� ��� ��������
	string GetSurname() const; //���������� ������� ��������
	string GetOtchestvo() const; //���������� �������� ��������
	//Date GetBirthday() const; //���������� ���� �������� ��������
	string GetAddress() const; //���������� ������ ��������
	string GetPhone() const; //���������� ���������� ����� ��������
	short* GetZachot() const; //���������� ������ �� �������
	short* GetKursach() const; //���������� ������ �� ������
	short* GetExams() const; //���������� ������ �� ��������
	void ShowStudent(); // ����� ���� ����� ������� �������	
};

