#ifndef TEMPERATUREMODEL_H
#define TEMPERATUREMODEL_H

#include "Observable.h"

// class Observable;

//===============================================================================
// 
//	Разработал: Ярмушов Вадим	05.01.2021
//
//  Файл: TemperatureMode.h 
//	ver: 0.0.1
//
//	Назначение: Модель  в MVC.    класс TemperatureModel переводит градусы в Фаренгейтах 
//  в градусы Цельсия и наоборот. класс Model в MVC
//	Cделаем класс TemperatureModel «оповещателем», чтобы у него в последствии
//  могли быть «слушатели», следящие за его изменениями. Так как мы уже создали
//  для этого все необходимые классы, нет ничего проще, чем сделать класс
//  TemperatureModel наследником класса Observable.
//
//===============================================================================

class TemperatureModel : public Observable
{

private:
	float m_temperatureF;		// температура в Фаренгейтах

public:

	// конструктор получает температуру в Фаренгейтах
	TemperatureModel(float _tempF);	

	// получить температуру в Фаренгейтах
	float getF() const;

	// получить температуру в Цельсиях
	float getC() const;

	// установить температуру в в Фаренгейтах, получаем тепературу в Фаренгейтах
	void setF(const float tempF);

	// установить температуру в Цельсиях, получаем тепературу в Цельсиях
	void setС(const float tempC);
};













#endif // !TEMPERATUREMODEL_H

