#include <iostream>

#include "Mail.h"
#include "MailBox.h"
#include "IconBadgeMonitor.h"
#include "GuiNotifier.h"
#include "Observer.h"

int main() {

    Mail Email1("Aggiornamenti","MatLabInc","Aggiornamenti software",false);
    Mail Email2("Cambio orario","Professore","Cambio orario esame", false);
    Mail Email3("File richiesti","Luca","Ti mando dei file",true);
    Mail Email4("Codice","Filmon","Ti invio il codice",true);
    Mail Email5("Promozione","Amazon","Sconto su molti prodotti",true);

    MailBox MB1;

    GuiNotifier GN(&MB1,true);
    IconBadgeMonitor IBM1(&MB1);

    MB1.addMail(Email1);
    MB1.addMail(Email2);
    MB1.addMail(Email3);
    MB1.addMail(Email4);
    MB1.addMail(Email5);

    MB1.readEmail(0);
   /* MB1.readEmail(1);
    MB1.readEmail(2);
    MB1.readEmail(3);
    MB1.readEmail(4);*/




}