//===============================================================================
// 
//	����������: ������� �����	05.01.2021
//
//  ����: main.cpp 
//	ver: 0.0.1
//
//	����������: ������ Model-View-Controller � ��� ����������� ���������� 
//  ��������� ���������� �� ������������������ ����������.
// 
//
//===============================================================================

#include <iostream>
#include "TemperatureModel.h"
#include "ConsoleView.h"
#include "Controller.h"


int main()
{
	TemperatureModel* pmodel = new TemperatureModel(0);
	ConsoleView view(pmodel);
	Controller controller(pmodel);
	controller.start();


	
	if (! (pmodel==nullptr) )
	{
		delete pmodel;
	}

	


	return 0;
}