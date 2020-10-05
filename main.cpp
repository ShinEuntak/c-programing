#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <stdexcept>

// #include "median.h"
#include "grade.h"
#include "StudentInfo.h"

using std::vector;
using std::sort;
using std::cin;
using std::istream;

int main()
{
    vector<Student_info> students;
    Student_info record;

    std::cout << "Input the students name and scores: ";

    while (read(cin, record))
    {
        students.push_back(record);
    }

    for (int i = 0; i < students.size(); i++) 
    {
        std::cout << students[i].name << " " << grade(students[i]);
    }
    // sort(students.begin(), students.end(), compare);
        
    //try-catch
    // try {
    //     double final_grade = grade(students[]);
    // }
    // catch (domain_error){
    //     cout << "Enter the grades properly." << endl;
    //     return 1;
    // }
    return 0;
}