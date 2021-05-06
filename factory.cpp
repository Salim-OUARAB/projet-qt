#include "factory.h"



Element* Factory::creer(QString nomElement)
{
    if(nomElement == "Bouton")
    {
         return new BoutonElement();
    }else if(nomElement == "Slider")
    {
        return new SliderElement();

    }else if (nomElement == "Bouton+Slider")
    {
        return new SliderBoutonElement();
    }else
    {
        std::cout<<"Entrez : Bouton, Slider, Slider+Bouton"<<std::endl;
        return NULL; // Je pense qu'il faut faire une exception
    }
}
