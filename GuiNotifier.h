//
// Created by Edoardo on 22/06/2017.
//

#ifndef EX6_MAILBOX_GUINOTIFIER_H
#define EX6_MAILBOX_GUINOTIFIER_H


#include "Observer.h"
#include "MailBox.h"

class GuiNotifier : public Observer{                                                                                       //Ereditarietà multipla per il metodo Update
public:

    GuiNotifier(MailBox *subject,bool act) : subject(subject), active(act) {                                               //Costruttore di GuiNotifier che riceve come parametri
        this->subject->SubScribe(this);                                                                                    //un puntatore alla classe mailbox e un flag per vedere l'attività della mailbox
    };

    virtual ~GuiNotifier() {
        subject->UnSubScribe(this);
    };

    virtual void Update(std::string ti, std::string se,int un){
        title=ti;
        sender=se;                                                                                                          //in caso di aggiornamento il metodo Update chiama draw
        Draw(ti,se);
    }

    void Draw(std::string title, std::string se){
        if(isActive()){
            std::cout<<std::endl<<"E' arrivata una nuova mail con titolo: ''"<< se <<"'' da : ''"<<title<<"''";
        }
    }

    bool isActive() const {
        return active;
    }

    void setActive(bool active) {
        GuiNotifier::active = active;
    }

private:

    std::string title;
    std::string sender;
    bool active;
    MailBox *subject;
};


#endif //EX6_MAILBOX_GUINOTIFIER_H
