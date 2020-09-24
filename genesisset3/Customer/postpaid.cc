
#include "postpaid.h"
#include<iostream>
PostpaidCustomer::PostpaidCustomer():CustomerBase(){


}

PostpaidCustomer::PostpaidCustomer(std::string x ,std::string y,std::string z,double r):CustomerBase(x,y,z,r){

       // billPay=a;
}

//PreaidCustomer::PrepaidCustomer(std::string x,std::string y,std::string z);

void PostpaidCustomer:: credit(double x){

        double balance_prepaid=CustomerBase::getBalance();
        double cred=balance_prepaid+x;

        CustomerBase::setBalance(cred);

        //int cred=balance_prepaid+x;

        //m_balance+=x;


}

void PostpaidCustomer:: makeCall(double y){



//            m_balance+=y;


}
double PostpaidCustomer::getBalance() const{

        double balance_prepaid=CustomerBase::getBalance();
       return balance_prepaid;
}
 void PostpaidCustomer::display() const{

    std::cout<<CustomerBase::getBalance();

 }




