#ifndef SLIDERBOUTONELEMENT_H
#define SLIDERBOUTONELEMENT_H

#include "element.h"
#include <QPushButton>
#include <QSlider>
#include <iostream>

class SliderBoutonElement : public Element // SliderBoutonElement hérite de element
{
    Q_OBJECT
public:
    explicit SliderBoutonElement(QWidget *parent = 0); //constructeur
    ~SliderBoutonElement(); //Destructeur

public slots:
    void showSliderBoutonValueId(); // méthode slot

private:
    //Attributs
   QPushButton* mon_bouton;
   QSlider* mon_slider;

};

#endif // SLIDERBOUTONELEMENT_H
