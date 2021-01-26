#include "Controller.h"
#include <iostream>




Controller::Controller(TemperatureModel*& temp_model)
{
	m_model = temp_model;
}


void Controller::start()
{
    // �������� ��������������� �������� ������ � 0
   m_model->set�(0);

    float temp;

    // �������� ����, ���������� �� ����� 0
    do
    {
        std::cout << "\nEnter temp: ";
        std::cin >> temp;
        m_model->set�(temp);

    } while (temp != 0);

}
