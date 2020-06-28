//
//  Account.hpp
//  Pointer
//
//  Created by aqua on 2020/06/28.
//  Copyright © 2020 Pointer. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>

#include <string>

class Account {
private:
    std::string full_name;
    std::string number;
    long crnt_balance;
    
public:
    Account(std::string name, std::string num, long amnt);
    
    std::string name() { return full_name; }
    std::string no() { return number; }
    long balance() { return crnt_balance; }
    
    void deposit(long amnt);
    void withdraw(long amnt);
};

#endif /* Account_hpp */


