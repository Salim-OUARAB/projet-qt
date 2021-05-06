#include "slider_element.h"


/* SliderElement permet de créer et de gérer le Silder  */
SliderElement::SliderElement(QWidget *parent) : Element(parent)
{
    mon_slider =new QSlider(Qt::Vertical,this); //Location de la mémoire
    mon_slider->setFixedHeight(160);
    mon_slider->move(38,2);

    //Evenements slider
    connect(mon_slider, &QSlider::sliderMoved, this, &SliderElement::showSliderValueId);
    connect(mon_slider, &QSlider::sliderPressed, this, &SliderElement::showSliderValueId);
    connect(mon_slider, &QSlider::sliderReleased, this, &SliderElement::showSliderValueId);
    connect(mon_slider, &QSlider::valueChanged, this, &SliderElement::showSliderValueId);

}

void SliderElement::showSliderValueId() //méthode slot
{
    std::cout << "Slider Id: " << this->getId() << " --> Valeur : " << mon_slider->value() <<std::endl;
}

SliderElement::~SliderElement() //destructeur, supprimer la mémoire allouée
{
    delete mon_slider;
}
