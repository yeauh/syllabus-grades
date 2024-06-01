//
// Created by Alex T on 5/31/24.
//

#ifndef CALCULATE_H
#define CALCULATE_H
#include <iostream>
static float testGrade = 0.0;
static float hwGrade = 0.0;
static float examGrade = 0.0;
static float attGrade = 0.0;
static float labGrade = 0.0;
class calculateGrades {
public:

    static void tests(float a, float b, float c);
    static void homework(float a, float b);
    static void exams(float a, float b);
    static void att(float a);
    static void labs(float a, float b);
    calculateGrades();

    ~calculateGrades();

private:
    constexpr static const float testWeight = .30;
    constexpr static const float hwWeight = .15;
    constexpr static const float examWeight = .4;
    constexpr static const float attWeight = .05;
    constexpr static const float labWeight = .10;


};

calculateGrades::calculateGrades() {
    float finalGrade = testGrade + hwGrade + examGrade + attGrade + labGrade;
    std::cout << finalGrade;
}
// add the final else-if statements
void calculateGrades::tests(float a, float b, float c) {
    float temp;

    if (a < b && a < c) {
        temp = (b+c)/2;
    } else if (b < a && b < c) {
        temp = (a+c)/2;
    } else {
        temp = (a+b)/2;
    }
    testGrade = temp * testWeight;
    std::cout << testGrade << " out of .3";
}

void calculateGrades::homework(float a, float b) {
    float temp = (a+b)/2;
    hwGrade = temp * hwWeight;
}

calculateGrades::~calculateGrades() {

}

void calculateGrades::exams(float a, float b) {
    float temp = (a+b)/2;
    examGrade = temp * examWeight;
}

void calculateGrades::att(float a) {
    examGrade = a * attWeight;
}

void calculateGrades::labs(float a, float b) {
    float temp= (a+b)/2;
    labGrade = temp * labWeight;
}


#endif //CALCULATE_H
