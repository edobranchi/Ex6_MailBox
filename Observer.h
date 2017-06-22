//
// Created by Edoardo on 22/06/2017.
//

#ifndef EX6_MAILBOX_OBSERVER_H
#define EX6_MAILBOX_OBSERVER_H

#include <iostream>

class Observer{
public:
    virtual void Update(std::string, std::string, int unRed)=0;
};

#endif //EX6_MAILBOX_OBSERVER_H
