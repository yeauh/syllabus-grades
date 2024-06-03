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
    static float * finalGrade();
    calculateGrades();

    ~calculateGrades() = default;

private:
    constexpr static const float testWeight = .30;
    constexpr static const float hwWeight = .15;
    constexpr static const float examWeight = .4;
    constexpr static const float attWeight = .05;
    constexpr static const float labWeight = .10;


};

calculateGrades::calculateGrades() = default;

// add the final else-if statements
void calculateGrades::tests(float a, float b, float c) {
    float temp;

    if (a < b && a < c) {
        temp = (b+c)/2;
        std::cout << b << "+" << c << "/2=" << temp;
    } else if (b < a && b < c) {
        temp = (a+c)/2;
        std::cout << a << "+" << c << "/2=" << temp;
    } else {
        temp = (a+b)/2;
        std::cout << a << "+" << b << "/2=" << temp;
    }
    testGrade = temp * testWeight;
    std::cout << std::endl;
    std::cout << testGrade << " out of 30";
}

void calculateGrades::homework(float a, float b) {
    float temp = (a+b)/2;
    hwGrade = temp * hwWeight;
    std::cout << hwGrade << " out of 15";
}

void calculateGrades::exams(float a, float b) {
    float temp = (a+b)/2;
    examGrade = temp * examWeight;
    std::cout << examGrade << " out of 40";
}

void calculateGrades::att(float a) {
    attGrade = a * attWeight;
    std::cout << attGrade << " out of 100";

}

void calculateGrades::labs(float a, float b) {
    float temp= (a+b)/2;
    labGrade = temp * labWeight;
}

float * calculateGrades::finalGrade() {
    float finalGradeNum = testGrade + hwGrade + examGrade + attGrade + labGrade;
    std::cout << "final grade(number): " << finalGradeNum;
    int finalPtr = finalGradeNum;
    return &finalGradeNum;
}

#endif //CALCULATE_H
