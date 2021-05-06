#ifndef FACTORY_H
#define FACTORY_H

#include <QString>
#include "slider_bouton_element.h"
#include "slider_element.h"
#include "bouton_element.h"
#include <iostream>

// Permet de créer les élement
class Factory
{

public:
    static Element* creer(QString nomElement); //Static pour ne pas de créer un objet Factory lorsque on appelle cette méthode
};

#endif // FACTORY_H
