#include "prepaid.h"
#include<iostream>
PrepaidCustomer::PrepaidCustomer():CustomerBase(){


}

PrepaidCustomer::PrepaidCustomer(std::string x ,std::string y,std::string z,double r):CustomerBase(x,y,z,r){


}

//PreaidCustomer::PrepaidCustomer(std::string x,std::string y,std::string z);

void PrepaidCustomer:: credit(double x){

        double balance_prepaid=CustomerBase::getBalance();

        double cred=balance_prepaid+x;

        CustomerBase::setBalance(cred);

   // m_balance+=x;





}

void PrepaidCustomer:: makeCall(double y){

    double balance_prepaid=CustomerBase::getBalance();
    if(balance_prepaid>0){

        balance_prepaid-=y;
        CustomerBase::setBalance(balance_prepaid);

    }


}
double PrepaidCustomer::getBalance() const{

       double balance_prepaid=CustomerBase::getBalance();
       return balance_prepaid;

}

 void  PrepaidCustomer::display() const{

    std::cout<<CustomerBase::getBalance();


 }




