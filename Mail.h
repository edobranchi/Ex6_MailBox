//
// Created by Edoardo on 22/06/2017.
//

#ifndef EX6_MAILBOX_MAIL_H
#define EX6_MAILBOX_MAIL_H

#include <iostream>

class Mail {
public:

    Mail(std::string ti, std::string se, std::string te,bool r= false): title(ti),sender(se),text(te),read(r){};          //Costruttore di Mail, aggiunge una nuova mail
                                                                                                                          //con un titolo, un mittente,un corpo e un flag di lettura
    std::string getTitle() const {return title;}
    std::string getSender() const {return sender;}                                                                        //getter di title sender e text
    std::string getText() const {return text;}

    bool isRead() const {return read;}                                                                                   //getter e setter del booleano read
    void setRead(bool r) {read=r;}

private:

    std::string title,sender,text;
    bool read;
};


#endif //EX6_MAILBOX_MAIL_H
