#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "shape.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_1_draw_clicked();

    void on_pushButton_2_draw_clicked();

    void on_pushButton_3_draw_clicked();

    void on_dial_1_rotation_valueChanged(int value);

    void on_dial_2_rotation_valueChanged(int value);

    void on_dial_3_rotation_valueChanged(int value);

    void on_spinBox_1_x_valueChanged(int arg1);

    void on_spinBox_1_y_valueChanged(int arg1);

    void on_spinBox_1_x_2_valueChanged(int arg1);

    void on_spinBox_1_y_2_valueChanged(int arg1);

    void on_spinBox_1_x_3_valueChanged(int arg1);

    void on_spinBox_1_y_3_valueChanged(int arg1);



private:
    Ui::MainWindow *ui;

    QGraphicsScene * scene;
};
#endif // MAINWINDOW_H
