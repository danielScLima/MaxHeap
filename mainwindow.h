#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "maxheap.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/*!
 * \brief The MainWindow class
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*!
     * \brief MainWindow
     * \param parent
     */
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:
    /*!
     * \brief on_pushButtonOfInsertion_clicked
     */
    void on_pushButtonOfInsertion_clicked();

    /*!
     * \brief on_pushButton_clicked
     */
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    MaxHeap maxHeap;

    /*!
     * \brief updateDotFile
     */
    void updateDotFile();

    /*!
     * \brief updateImage
     */
    void updateImage();

    /*!
     * \brief renderImage
     */
    void renderImage();
};
#endif // MAINWINDOW_H
