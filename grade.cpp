#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"

double grade(double midterm, double final, double homework){
    return 0.2*midterm + 0.4*final + 0.4*homework;
}

double grade(double midterm, double final, const std::vector<double>& homework){
    if (homework.size()==0)
        throw std::domain_error("Student has done no homework.");
    return 0.2*midterm + 0.4*final + 0.4*median(homework);
}

double grade(const Student_info& student){
    if (student.homework.size()==0)
        throw std::domain_error("Student has done no homework.");
    return 0.2*student.midterm + 0.4*student.final + 0.4*median(student.homework);
}

