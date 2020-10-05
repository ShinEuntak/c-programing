#ifndef GUARD_StudentInfo_h
#define GUARD_StudentInfo_h

#include <string>
#include <vector>

// using namespace std;

struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

std::istream& read_hw(std::istream&, std::vector<double>&);
std::istream& read(std::istream&, Student_info&);
bool compare(const Student_info&, const Student_info&);

#endif