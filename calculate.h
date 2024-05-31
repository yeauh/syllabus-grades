//
// Created by Alex T on 5/31/24.
//

#ifndef CALCULATE_H
#define CALCULATE_H

class calculateGrades {
public:
    float testW = 0;
    calculateGrades();
    float tests(float a, float b, float c);
    float homework(float a, float b);
    float exams(float a, float b);
    float att(float a);
    float labs(float a, float b);
    ~calculateGrades();

private:
    float testWeight = .30;
    float hwWeight = .15;
    float examWeight = .4;
    float attWeight = .05;
    float labWeight = .10;


};

calculateGrades::calculateGrades() = default;

float calculateGrades::tests(float a, float b, float c) {
    float temp = 0;
    if(a<b<c) {
        temp = (b+c)/2;
    }
    testW = temp * testWeight;
    return 0;
}

float calculateGrades::homework(float a, float b) {
    float temp = (a+b)/2;
    return temp * hwWeight;
}

calculateGrades::~calculateGrades() {

}

float calculateGrades::exams(float a, float b) {
    float temp = (a+b)/2;
    return temp * examWeight;
}

float calculateGrades::att(float a) {
    float temp = a * attWeight;
    return temp;
}

float calculateGrades::labs(float a, float b) {
    float temp= (a+b)/2;
    return temp * labWeight;
}


#endif //CALCULATE_H
