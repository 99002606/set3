#include "customer.h"
#include<iostream>

using namespace std;
CustomerBase:: CustomerBase(): m_custId(""),m_phone(""),m_custName(""),m_balance(0){};





CustomerBase::CustomerBase(std::string x,std::string y,std::string z,double t) : m_custId("x"),m_phone("y"),m_custName("z"),m_balance(t){};

CustomerBase::CustomerBase(const CustomerBase &ref) : m_custId(ref.m_custId),m_phone(ref.m_phone),m_custName(ref.m_custName),m_balance(ref.m_balance){};




/*Customer::Customer(AccountType){

            m_type=savings;

}*/

/*void Customer:: Credit(double x) {

    m_balance+=x;



}*/
void CustomerBase:: setBalance(double y)  {

    m_balance=y;

}


double CustomerBase:: getBalance() const {

    return m_balance;

}
/*void Customer:: Display() {

    cout<<"m_custId"<<m_custID;

}*/
