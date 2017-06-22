//
// Created by Edoardo on 22/06/2017.
//

#ifndef EX6_MAILBOX_MAILBOX_H
#define EX6_MAILBOX_MAILBOX_H


#include <vector>
#include <list>
#include "Mail.h"
#include "Observer.h"

class MailBox {
public:
    void addMail(const Mail& newMail){
        emails.push_back(newMail);
        Notify();
    }
    const Mail& lastEmail() const {
        return emails.back();
    }
    void readEmail(int i){
        if(i>=0 && i<emails.size()){
            std::cout<<std::endl<< "Il titolo e' : "<< emails[i].getTitle() << std::endl;
            std::cout<<"il mittente e' : " <<emails[i].getSender() << std::endl;
            std::cout<<"Il testo e' : " <<emails[i].getText() << std::endl;
            emails[i].setRead(true);
        }else
            std::cerr << "bad index" <<std::endl;
        Notify();
    }
    int getNumUnreadEmails() const {
        int unreadcount=0;
        for(auto itr=emails.begin(); itr!=emails.end(); itr++){
            if(!(*itr).isRead()){
                unreadcount++;
            }
        }
        return unreadcount;
    }

    void SubScribe(Observer *O){
        Observers.push_back(O);
    }

    void UnSubScribe(Observer *O){
        Observers.remove(O);
    }
    void Notify() const {
        for(auto iter=Observers.begin();iter !=Observers.end() ; iter++){
            (*iter)->Update(lastEmail().getSender(),lastEmail().getTitle(),getNumUnreadEmails());
        }
    }

private:
    std::vector<Mail> emails;
    std::list<Observer*> Observers;
};


#endif //EX6_MAILBOX_MAILBOX_H
