#ifndef BOUTON_ELEMENT_H
#define BOUTON_ELEMENT_H

#include <element.h>

#include "bouton_element.h"
#include <QPushButton>
#include <iostream>

class BoutonElement : public Element //BoutonElement hérite de element
{
    Q_OBJECT
public:
    explicit BoutonElement(QWidget *parent = 0); //Constructeur
    ~BoutonElement(); //Destructeur


public slots:
    void showBoutonId(); //Méthode slot

private:
    QPushButton *mon_bouton; //Attribut

};
#endif // BOUTON_ELEMENT_H
