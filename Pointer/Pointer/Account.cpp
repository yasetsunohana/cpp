//
//  Account.cpp
//  Pointer
//
//  Created by aqua on 2020/06/28.
//  Copyright © 2020 Pointer. All rights reserved.
//

#include "Account.hpp"
#include <string>
#include <iostream>

using namespace std;

Account::Account(std::string name, std::string num, long amnt) {
    full_name = name;
    number = num;
    crnt_balance = amnt;
}

void Account::deposit(long amnt) {
    crnt_balance += amnt;
}
void Account::withdraw(long amnt){
    crnt_balance -= amnt;
}


