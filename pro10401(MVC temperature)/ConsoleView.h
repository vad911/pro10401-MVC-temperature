#ifndef CONSOLEVIEW_H
#define CONSOLEVIEW_H


//===============================================================================
// 
//	Разработал: Ярмушов Вадим	05.01.2021
//
//  Файл: ConsoleView.h 
//	ver: 0.0.1
//
//	Назначение: класс  ConsoleView представляет класс типа - "View" - Представление в модели MVC 
//  
// 
//
//===============================================================================





#include "Observer.h"               // подключим абстрактный класс "Наблюдатель"
#include "TemperatureModel.h"       // подключим модель


class ConsoleView : public Observer
{

public:

    // конструктор класса  ConsoleView - типа View
    ConsoleView(TemperatureModel* temp_model);
 
    // переопределим фунцию  update() из родительского класса Observer
    virtual void update() override;
    
private:

    TemperatureModel* m_model;      // указатель на Модель
};












#endif // !CONSOLEVIEW_H

