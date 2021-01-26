#ifndef COMTROLLER_H
#define COMTROLLER_H

#include "TemperatureModel.h"       // ��������� ������


class Controller
{
public:

    // ���������� ����������
    Controller(TemperatureModel*& temp_model);
   

    // ������ ���������� ������ � ����������� ����� ����� ������ �� ��� ���, ���� ������������ �� ������ 0.
    // m���� start() ���������� ������ � �������������� ���������
    void start();
   

private:
    TemperatureModel* m_model;      // ��������� �� ������
};



#endif // !COMTROLLER_H

