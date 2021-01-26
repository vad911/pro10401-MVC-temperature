#include "Controller.h"
#include <iostream>




Controller::Controller(TemperatureModel*& temp_model)
{
	m_model = temp_model;
}


void Controller::start()
{
    // устновка первоначального значения Модели в 0
   m_model->setС(0);

    float temp;

    // запустим цикл, работающий до ввода 0
    do
    {
        std::cout << "\nEnter temp: ";
        std::cin >> temp;
        m_model->setС(temp);

    } while (temp != 0);

}
