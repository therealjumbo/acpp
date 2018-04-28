#ifndef __GRADE_H
#define __GRADE_H

#include <vector>
#include "student_info.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const student_info&);

#endif
