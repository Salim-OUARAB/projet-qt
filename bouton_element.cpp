#include "bouton_element.h"

/*BoutonElement permet de créer et de gérer le bouton */
BoutonElement::BoutonElement(QWidget *parent) : Element(parent)
{
    mon_bouton = new QPushButton("Mute",this); //Location de la mémoire
    mon_bouton->move(2,90);


    //Evenement du bouton
    connect(mon_bouton, &QPushButton::released, this,&BoutonElement::showBoutonId);


}

void BoutonElement::showBoutonId() //Méthode slot
{
    std::cout<<"Bouton Id : "<< this->getId()<<std::endl;

}


BoutonElement::~BoutonElement() // destructeur, supprimer la mémoire allouée
{
    delete mon_bouton;
}
