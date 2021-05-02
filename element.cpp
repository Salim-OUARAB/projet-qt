#include "element.h"

/*Element est une classe de base pour les classes : SliderElement, BoutonElement et SliderBoutonElement
chaque classe va hériter: id, un rectangle, et ces méthodes*/

Element::Element(QWidget *parent) : QFrame(parent) //Constructeur

{
    setFrameShape(QFrame::Box); // un objet de type element aura un rectangle de type Qframe
    // La méthode setFrameShape est héritée de la classe QFrame
    setFixedSize(100,200);
}

void Element::setId(unsigned int identification)//  Méthode à hériter permet de modifier l'Id
{
    id = identification;
}

unsigned int Element::getId()const // Méthode à hériter permet de recupérer l'Id
{
    return id;
}

Element::~Element() // Déstructeur
{
}
