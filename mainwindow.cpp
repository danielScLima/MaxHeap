#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDir>
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    updateDotFile();
    updateImage();
    renderImage();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateDotFile()
{
    std::ofstream myFile;
    QDir::setCurrent(QCoreApplication::applicationFilePath());
    myFile.open
    (
        "file.dot"
    );

    std::string textToFile;
    textToFile = maxHeap.gitDotFileMode1();

    myFile << textToFile;
    myFile.close();
}

void MainWindow::updateImage()
{
    std::string message =
                "dot -Tpng file.dot > file.png";
    QDir::setCurrent(QCoreApplication::applicationFilePath());
    system(message.c_str());
}

void MainWindow::renderImage()
{
    QDir::setCurrent(QCoreApplication::applicationFilePath());
    QPixmap image("file.png");
    ui->labelOfImage->setPixmap(image);
    ui->labelOfImage->show();
}

void MainWindow::on_pushButtonOfInsertion_clicked()
{
    int number = ui->lineEdit->text().toInt();

    maxHeap.insertInterface(number);

    updateDotFile();
    updateImage();
    renderImage();
}

void MainWindow::on_pushButton_clicked()
{
    int removed = maxHeap.removeTheHighestNumber();

    updateDotFile();
    updateImage();
    renderImage();
}
