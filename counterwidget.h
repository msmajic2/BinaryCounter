#ifndef COUNTERWIDGET_H
#define COUNTERWIDGET_H

#include <QLCDNumber>
#include <QLabel>
#include <QTimer>
#include "gpio.h"

class CounterWidget : public QWidget
{
    Q_OBJECT

public:
    CounterWidget(QWidget *parent = nullptr);
    ~CounterWidget();

public slots:
    void updateCounter();

private:
     void refreshLED();
     int m_count;
     int m_number;
     QTimer m_timer;
     Gpio m_gpio;
     QLCDNumber* m_lcd = nullptr;




};

#endif // COUNTERWIDGET_H
