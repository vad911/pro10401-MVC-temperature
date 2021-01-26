#include "TemperatureModel.h"

TemperatureModel::TemperatureModel(float tempF)
{
	m_temperatureF = tempF;
}

float TemperatureModel::getF() const
{
	return m_temperatureF;
}

float TemperatureModel::getC() const
{
	return (m_temperatureF - 32.0) * 5.0 / 9.0;
}

void TemperatureModel::setF(const float tempF)
{
	m_temperatureF = tempF;
	notifyUpdate();		// !!! модификация класса для шаблона "Наблюдатель", добавлен метод  notifyUpdate(); «слушатели» будут оповещены в случае любых изменений в модели.	
}

void TemperatureModel::setС(const float tempC)
{
	m_temperatureF = tempC * 9.0 / 5.0 + 32.0;
	notifyUpdate();		// !!! модификация класса для шаблона "Наблюдатель", добавлен метод  notifyUpdate(); «слушатели» будут оповещены в случае любых изменений в модели.	
}
