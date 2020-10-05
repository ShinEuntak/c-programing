#include "median.h"
#include <algorithm>
#include <vector>

double median(std::vector<double> vec){
    typedef std::vector<double>::size_type vec_sz;
    vec_sz size = vec.size();

    std::sort(vec.begin(), vec.end());
    vec_sz mid = size/2;
    return size%2==0? (vec[mid]+vec[mid-1])/2 : vec[mid];
}