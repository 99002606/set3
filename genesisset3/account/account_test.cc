#include<gtest/gtest.h>
#include"account.h"
#include"CreditAccount.h"
#include"SavingsAccount.h"
using namespace std;

TEST(CreditAccount,DefaultConstructor) {
    AccountBase *ca1;
   ca1 = new CreditAccount("Afrose","afsa",1000);
    EXPECT_EQ(900,ca1->debit(100));
    EXPECT_EQ(1000,ca1->credit(100));

}
