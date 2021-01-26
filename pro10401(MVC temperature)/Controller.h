#ifndef COMTROLLER_H
#define COMTROLLER_H

#include "TemperatureModel.h"       // подключим Модель


class Controller
{
public:

    // конструтор Контролера
    Controller(TemperatureModel*& temp_model);
   

    // запуск контролера модели в бесконечном цикле ввода данных до тех пор, пока пользователь не введет 0.
    // mетод start() сбрасывает модель в первоначальное состояние
    void start();
   

private:
    TemperatureModel* m_model;      // указатель на модель
};



#endif // !COMTROLLER_H

