#include "StudentInfo.h"
#include <iostream>
#include <vector>


std::istream& read_hw(std::istream& in, std::vector<double>& hw){
    if (in) {
        hw.clear();
        double x;
        while (in >> x)
            hw.push_back(x);
        in.clear();
    }
    return in;
}

//	Thanks 9 10 8 3 9 9 9 
std::istream& read(std::istream& in, Student_info& student){
    in >> student.name >> student.midterm >> student.final;
    read_hw(in, student.homework);
    return in;
}

bool compare(const Student_info& a, const Student_info& b){
    return a.name < b.name;
}