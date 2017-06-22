//
// Created by Edoardo on 22/06/2017.
//

#ifndef EX6_MAILBOX_ICONBADGEMONITOR_H
#define EX6_MAILBOX_ICONBADGEMONITOR_H


#include "Observer.h"
#include <iostream>

class IconBadgeMonitor : public Observer{
public:

    IconBadgeMonitor(MailBox *subject): subject(subject){
        this->subject->SubScribe(this);
    };
    virtual ~IconBadgeMonitor() {
        subject->UnSubScribe(this);
    };
    void Update(std::string ti,std::string se, int n){
        unread=n;
        Draw();
    }
    void Draw(){
        std::cout<<" Ci sono : ''"<<unread<<"'' mail da leggere";
    }

private:
    int unread;
    MailBox *subject;
};


#endif //EX6_MAILBOX_ICONBADGEMONITOR_H
