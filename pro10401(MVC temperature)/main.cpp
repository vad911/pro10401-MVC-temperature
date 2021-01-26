//===============================================================================
// 
//	Разработал: Ярмушов Вадим	05.01.2021
//
//  Файл: main.cpp 
//	ver: 0.0.1
//
//	Назначение: Шаблон Model-View-Controller — это методология разделения 
//  структуры приложения на специализированные компоненты.
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