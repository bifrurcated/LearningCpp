#include <iostream>
#include "Student.h"
#include "Professor.h"
#include "ExtramuralStudent.h"
using namespace std;

/*
    Наследование
*/

int Inheritance()
{
    setlocale(LC_ALL, "RU");

    Student student("Max");
    student.group = "BIS-18-02";
    student.Learn();
    cout << "Student name = " << student.GetNameStudent() << endl;

    Professor professor;
    professor.SetName("BKV");
    professor.subject = "IT";
    cout << "Progessor name = " << professor.GetName() << endl;

    ExtramuralStudent extraSt;
    extraSt.SetNameExtramural("Nik");
    extraSt.group = "BISP-18-01";
    extraSt.Learn();
    cout << "Extramural name = " << extraSt.GetNameExtramural() << endl;

    return 0;
}
