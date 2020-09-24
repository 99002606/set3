#ifndef MANAGER_H_INCLUDED
#define MANAGER_H_INCLUDED


#include "employee.h"
#include <string>
using namespace std;
class Manager : public Employee {
  int m_projCode;
  int m_reportees;
  public:
  Manager(std::string id, std::string name, double salary,int exp,int code,int reprtees);
  double payroll();
  double appraisal();

};

#endif // MANAGER_H_INCLUDED
