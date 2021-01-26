#ifndef CONSOLEVIEW_H
#define CONSOLEVIEW_H


//===============================================================================
// 
//	����������: ������� �����	05.01.2021
//
//  ����: ConsoleView.h 
//	ver: 0.0.1
//
//	����������: �����  ConsoleView ������������ ����� ���� - "View" - ������������� � ������ MVC 
//  
// 
//
//===============================================================================





#include "Observer.h"               // ��������� ����������� ����� "�����������"
#include "TemperatureModel.h"       // ��������� ������


class ConsoleView : public Observer
{

public:

    // ����������� ������  ConsoleView - ���� View
    ConsoleView(TemperatureModel* temp_model);
 
    // ������������� ������  update() �� ������������� ������ Observer
    virtual void update() override;
    
private:

    TemperatureModel* m_model;      // ��������� �� ������
};












#endif // !CONSOLEVIEW_H

