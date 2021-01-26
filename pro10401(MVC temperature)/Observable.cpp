#include "Observable.h"



void Observable::addObserver(Observer* observer)
{
	m_observers.push_back(observer);
}


void Observable::notifyUpdate()
{

    
    int size = m_observers.size();

    // ��������� �� ������� ������� observer � �������� �� ����������
    for (int i = 0; i < size; i++)
    {
        m_observers[i]->update();
    }
}
