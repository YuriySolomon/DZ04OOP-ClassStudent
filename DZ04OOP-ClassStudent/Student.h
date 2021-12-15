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
	short* zachot = nullptr; // ������ �� �������
	short* kursach = nullptr; // ������ �� ������
	short* exams = nullptr; // ������ �� ��������
	unsigned short size = 50; // ���������� �������� � ��������
	short zachot_count = 0; // ����� ��������� ������ �� �����
	short kursach_count = 0; // ����� ��������� ������ �� ������
	short exams_count = 0; // ����� ��������� ������ �� ��������

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
	void SetZachot(const short grade); // ������ �� �������� ������ �� �������
	void SetKursach(const short grade); // ������ �� �������� ������ �� ������
	void SetExams(const short grade); // ������ �� �������� ������ �� ��������
	string GetName() const; //���������� ��� ��������
	string GetSurname() const; //���������� ������� ��������
	string GetOtchestvo() const; //���������� �������� ��������
	//Date GetBirthday() const; //���������� ���� �������� ��������
	string GetAddress() const; //���������� ������ ��������
	string GetPhone() const; //���������� ���������� ����� ��������
	void GetZachot(); //���������� ������ �� �������
	void GetKursach(); //���������� ������ �� ������
	void GetExams(); //���������� ������ �� ��������
	void ShowStudent(); // ����� ���� ����� ������� �������	
};

