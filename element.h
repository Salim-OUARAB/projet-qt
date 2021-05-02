#ifndef ELEMENT_H
#define ELEMENT_H


#include <QFrame>

class Element : public QFrame  //Classe Element hérite de QFrame
{
    Q_OBJECT
public:
    explicit Element(QWidget *parent = 0); //Prototype constructeur
    //méthodes accesseurs
    void setId(unsigned int identifiant);
    unsigned int getId()const;

    ~Element(); //prototype Déstructeur



protected:
    unsigned int id;  // Attribut id

};


#endif // ELEMENT_H
