#include <iostream>
#include "calculate.h"

using namespace std;

int main() {
    calculateGrades grades;
    float t1, t2, t3;
    float hw1, hw2;
    float exam1, exam2;
    float att;
    float l1, l2;

    cout << "\nEnter the students' tests grades" << endl;
    cout << "Test 1: "; cin >> t1;
    cout << "Test 2: "; cin >> t2;
    cout << "Test 3: "; cin >> t3;
    calculateGrades::tests(t1, t2, t3);

    cout << "\nEnter the students' homework grades" << endl;
    cout << "Homework 1: "; cin >> hw1;
    cout << "Homework 2: "; cin >> hw2;
    calculateGrades::homework(hw1, hw2);

    cout << "\nEnter the students' exam grade" << endl;
    cout << "Exam 1: "; cin >> exam1;
    cout << "Exam 2: "; cin >> exam2;
    calculateGrades::exams(exam1, exam2);


    cout << "\nEnter the students' attendance grade" << endl;
    cout << "Attendance: "; cin >> att;
    calculateGrades::att(att);

    cout << "\nEnter the students' lab grades" << endl;
    cout << "Lab 1: "; cin >> l1;
    cout << "Lab 2: "; cin >> l2;
    calculateGrades::labs(l1,l2);

    ;
    return 0;
}
