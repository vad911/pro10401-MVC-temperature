#include "ConsoleView.h"


ConsoleView::ConsoleView(TemperatureModel* temp_model)
{
        m_model = temp_model;
        m_model->addObserver(this);
}


void ConsoleView::update()
{
    system("cls");
    printf("Temperature in Celsius: %.2f\n", m_model->getC());
    printf("Temperature in Farenheit: %.2f\n", m_model->getF());
    printf("Input temperature in Celsius: ");
}
