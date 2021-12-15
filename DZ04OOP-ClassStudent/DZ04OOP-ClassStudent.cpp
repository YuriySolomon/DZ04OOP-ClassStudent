#include "Student.h"

int main()
{
	setlocale(0, "");
	Student Ivan;
	//Ivan.ShowStudent();
	Ivan.SetZachot(10);
	Ivan.SetZachot(11);
	Ivan.SetKursach(6);
	Ivan.SetKursach(7);
	Ivan.SetExams(8);
	Ivan.ShowStudent();
	Ivan.SetBirthday(10, 10, 1985);
	Ivan.ShowStudent();
	/*cout << "\n";
	Student Yuriy("Yuriy", "Solomon", "+38 (097) 795-84-11");
	Yuriy.ShowStudent();
	cout << "\n";
	Student Pasha(Yuriy);
	Pasha.ShowStudent();
	cout << "\n";*/
	system("pause >> NULL");
}
