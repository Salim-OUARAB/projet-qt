#ifndef MY_WINDOW_H
#define MY_WINDOW_H

#include <QMainWindow>
#include <element.h>
#include <QScrollArea>
#include <QWidget>
#include <QBoxLayout>
#include <QPushButton>
#include "factory.h"
#include <iostream>


class MyWindow : public QMainWindow //AquilabWindow hérite de QMainWindow
{
    Q_OBJECT
public:
    explicit MyWindow(QWidget *parent = 0); //Constructeur
    ~MyWindow(); //Destructeur
    void add(Element *e); //protype

public slots:
    void addSlider();
    void addBonton();
    void addBontonSlider();
    void a_quitter();


private:
      //Attributs

      unsigned compt; // Compteur Id
      //unsigned dx;  //Pas besoin

      Element *m_element;  //stocker le dernier élément pour supprimer

      QWidget *m_widget;
      QBoxLayout *m_box;
      QScrollArea *m_scrollArea;

      //Pour les élements
      QPushButton *m_boutonSlider;
      QPushButton *m_boutonBonton;
      QPushButton *m_boutonBontonSlider;

      QPushButton *m_quitter;


};
#endif // MY_WINDOW_H
