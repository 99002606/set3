#ifndef ENGINEER_H_INCLUDED
#define ENGINEER_H_INCLUDED

#include <string>
#include "employee.h"
using namespace std;

class Engineer : public Employee {
  int m_projCode;
  public:
  Engineer(std::string id, std::string name, double salary,int exp,int code);
  double payroll();
  double appraisal();


};


#endif // ENGINEER_H_INCLUDED
