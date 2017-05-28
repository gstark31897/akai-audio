#include <QtCore/QCoreApplication>
#include <QtCore/QSettings>
#include <QtNetwork/QHostAddress>
#include <QtWidgets/QApplication>
#include <QtGui/QIcon>
#include <stdlib.h>
#include <iostream>

#include "mainwindow.h"


int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
 
    int return_code = app.exec();
    delete mainWindow;

    return return_code;
}
