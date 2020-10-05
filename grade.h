#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include "median.h"
#include "StudentInfo.h"

double grade(double midterm, double final, double homework);
double grade(double midterm, double final, const std::vector<double>& homework);
double grade(const Student_info&);

#endif