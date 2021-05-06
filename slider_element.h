#ifndef SLIDERELEMENT_H
#define SLIDERELEMENT_H

#include "element.h"
#include <QSlider>
#include <iostream>


class SliderElement : public Element  //SliderElement Hérite de element
{
    Q_OBJECT
public:
    explicit SliderElement(QWidget *parent = 0); //Constructeur
    ~SliderElement(); //Destructeur
    
    
public slots:
    void showSliderValueId(); //Méthode slot

private:
    QSlider *mon_slider;

    
};

#endif // SLIDERELEMENT_H
