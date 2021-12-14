#include "Student.h"

int main()
{
	setlocale(0, "");
	Student Ivan;
	Ivan.ShowStudent();
	cout << "\n";
	Student Yuriy("Yuriy", "Solomon", "+38 (097) 795-84-11");
	Yuriy.ShowStudent();
	cout << "\n";
	Student Pasha(Yuriy);
	Pasha.ShowStudent();
	cout << "\n";
	system("pause >> NULL");
}
