greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
SOURCES += \
    main.cpp \
    element.cpp \
    bouton_element.cpp \
    my_window.cpp \
    slider_bouton_element.cpp \
    slider_element.cpp \
    factory.cpp

CONFIG += console

HEADERS += \
    element.h \
    bouton_element.h \
    my_window.h \
    slider_element.h \
    slider_bouton_element.h \
    factory.h
