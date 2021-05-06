#include "slider_bouton_element.h"


/* La SliderBoutonElement permet de créer et de gérer Silder + bouton */
SliderBoutonElement::SliderBoutonElement(QWidget *parent): Element(parent)
{
    //Configuration du bouton
    mon_bouton = new QPushButton("Mute",this); // Location de la mémoire pour le bouton. this : point à l'objet actuel
    mon_bouton->move(4,168);

    //Configuration slider
    mon_slider = new QSlider(Qt::Vertical,this); //Location de la mémoire pour le Slider. this : point à l'objet actuel
    mon_slider-> move(38,2);
    mon_slider->setFixedHeight(160);

    //Caputurer les évenements:
   //Bouton
    connect(mon_bouton, &QPushButton::released, this, &SliderBoutonElement::showSliderBoutonValueId);

   //Slider
    connect(mon_slider, &QSlider::sliderMoved, this, &SliderBoutonElement::showSliderBoutonValueId);
    connect(mon_slider, &QSlider::sliderPressed, this, &SliderBoutonElement::showSliderBoutonValueId);
    connect(mon_slider, &QSlider::sliderReleased, this, &SliderBoutonElement::showSliderBoutonValueId);
    connect(mon_slider, &QSlider::valueChanged, this, &SliderBoutonElement::showSliderBoutonValueId);

}

SliderBoutonElement::~SliderBoutonElement() //Destructeur, pour supprimer la mémoire louée
{
    delete mon_bouton;
    delete mon_slider;
}

void SliderBoutonElement::showSliderBoutonValueId() //Méthode slot
{
    //Afficher l'id et la valeur du slider
    std::cout << "Slider + Bouton Id: " << this->getId() << " --> Valeur : " << mon_slider->value() <<std::endl;
}


