#include <stdexcept>
#include <vector>

#include "grade.h"
#include "median.h"
#include "student_info.h"

using std::domain_error;
using std::vector;

double grade(double midterm, double final_exam, double homework) {
    return 0.2 * midterm + 0.4 * final_exam + 0.4 * homework;
}

double grade(double midterm, double final_exam, const vector<double>& hw) {
    if(hw.size() == 0) {
        throw domain_error("student has done no homework");
    }
    return grade(midterm, final_exam, median(hw));
}

double grade(const student_info& s) {
    return grade(s.midterm, s.final_exam, s.homework);
}
