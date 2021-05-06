#include "my_window.h"
/* Classe permet de contenir les élements et gérer l'emlacement de chaque element */
MyWindow::MyWindow(QWidget *parent) : QMainWindow(parent)
{
    //Initialisation
        setGeometry(300, 200,1400,700); //Permet aussi d'afficher la fenêtre en plein écran
        setFixedSize(1400,700);     //C'est pour fixer la fenetre
        compt = 1;  // Compteur
       // dx = 10; //position --> Pas besoin

        m_widget = new QWidget(this); //un widget entre cette fenetre et une box
        m_box = new QBoxLayout(QBoxLayout::LeftToRight);  //organisation des élements du gauche à droite
        m_widget -> setLayout(m_box);



        //barre de défilement
        m_scrollArea = new QScrollArea(this);
        m_scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn); //Horizontal
        m_scrollArea->setWidgetResizable(true); //mettre les élements dans le bon endroit
        m_scrollArea->setWidget(m_widget);
        setCentralWidget(m_scrollArea);



        // Ajouter des éléments avec des boutons
        m_boutonBonton = new QPushButton("Bouton",this);
        m_boutonBonton->move(1000,600);
        m_boutonBonton->setToolTip("Ajouter un Bouton");
        connect(m_boutonBonton,&QPushButton::clicked,this,&MyWindow::addBonton);

        m_boutonSlider = new QPushButton("Slider",this);
        m_boutonSlider->move(1110,600);
        m_boutonSlider->setToolTip("Ajouter un Slider");
        connect(m_boutonSlider,&QPushButton::clicked,this,&MyWindow::addSlider);

        m_boutonBontonSlider = new QPushButton("Slider + Bonton",this);
        m_boutonBontonSlider->move(1220,600);
        m_boutonBontonSlider->setToolTip("Ajouter un Slider + Bouton");
        connect(m_boutonBontonSlider,&QPushButton::clicked,this,&MyWindow::addBontonSlider);

        //Quitter l'application
        m_quitter = new QPushButton("Quitter",this);
        m_quitter->move(1220,640);
        connect(m_quitter,&QPushButton::clicked,this,&MyWindow::a_quitter);

}



void MyWindow::add(Element *e)
{
    m_box->addWidget(e);// ajouter les élement dans la box
    //m_box->removeWidget(); pour supprimer un élément (il faut stocker sont adresse)

 //   e-> setParent(box);  //Ajouter l'élement à la fenetre
    e-> setId(compt);

    // pas besoin de mové les éléments,
  //  e-> move(dx, 0); //movement unique horizontal vers la droite

    compt++; //incrémentation de l'Id
   // dx += 110; //incrémentation de la position ---> pas  besoin de la position des élements
}


//Slots pour les boutons
void MyWindow::addBonton()
{
    this->add(Factory::creer("Bouton"));    //add(bouton)
    std::cout<<"Ajout d'un bouton "<<std::endl;
}

void MyWindow::addSlider()
{
    this->add(Factory::creer("Slider"));         //add(bouton)
    std::cout<<"Ajout d'un Slider "<<std::endl;
}

void MyWindow::addBontonSlider()
{
    this->add(Factory::creer("Bouton+Slider")); //add(bouton + slider)
    std::cout<<"Ajout Bonton + Slider "<<std::endl;
}


void MyWindow::a_quitter()
{
    //Faire une messageBox, avoir une confirmation
    close();
}





MyWindow::~MyWindow()
{
    delete m_widget;
    delete m_box;
    delete m_scrollArea;
    delete m_boutonBonton;
    delete m_boutonSlider;
    delete m_boutonBontonSlider;
    delete m_quitter;

}
