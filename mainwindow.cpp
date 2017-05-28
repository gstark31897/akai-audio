#include <iostream>

#include "mainwindow.h"


MainWindow::MainWindow()
{
    m_audio   = new Audio(QHostAddress("104.236.159.164"), 6667, this);
    setupUI();
}


MainWindow::~MainWindow()
{
}


void MainWindow::setupUI()
{
    setObjectName(QStringLiteral("MainWindow"));
    resize(800, 600);
    retranslateUI();
}


void MainWindow::retranslateUI()
{
    setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
}
