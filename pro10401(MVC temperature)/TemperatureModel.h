#ifndef TEMPERATUREMODEL_H
#define TEMPERATUREMODEL_H

#include "Observable.h"

// class Observable;

//===============================================================================
// 
//	����������: ������� �����	05.01.2021
//
//  ����: TemperatureMode.h 
//	ver: 0.0.1
//
//	����������: ������  � MVC.    ����� TemperatureModel ��������� ������� � ����������� 
//  � ������� ������� � ��������. ����� Model � MVC
//	C������ ����� TemperatureModel �������������, ����� � ���� � �����������
//  ����� ���� ����������, �������� �� ��� �����������. ��� ��� �� ��� �������
//  ��� ����� ��� ����������� ������, ��� ������ �����, ��� ������� �����
//  TemperatureModel ����������� ������ Observable.
//
//===============================================================================

class TemperatureModel : public Observable
{

private:
	float m_temperatureF;		// ����������� � �����������

public:

	// ����������� �������� ����������� � �����������
	TemperatureModel(float _tempF);	

	// �������� ����������� � �����������
	float getF() const;

	// �������� ����������� � ��������
	float getC() const;

	// ���������� ����������� � � �����������, �������� ���������� � �����������
	void setF(const float tempF);

	// ���������� ����������� � ��������, �������� ���������� � ��������
	void set�(const float tempC);
};













#endif // !TEMPERATUREMODEL_H

