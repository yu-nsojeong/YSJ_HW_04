#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "shape.h"




circle c;
Rectangle r;
triangle t;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);





    scene->addLine(-200,0,200,0,QPen(Qt::blue));
    scene->addLine(0,-200,0,200,QPen(Qt::blue));
    //scene->setSceneRect(-800,-400,1600,800);

}

MainWindow::~MainWindow()
{
    delete ui;
}

///////////////////////////// 사각형/////////////////////////////////
void MainWindow::on_pushButton_1_draw_clicked()
{
    r.Draw(scene);
}
void MainWindow::on_dial_1_rotation_valueChanged(int value)
{
    r.Rotaion(value);
}


void MainWindow::on_spinBox_1_x_valueChanged(int arg1)
{
    qDebug()<<arg1;

    if(arg1 > r.pastvaluex){
        r.Move(5,0);
    }
    else if(arg1 == r.pastvaluex){
        r.Move(0,0);

    }
    else if(arg1 < r.pastvaluex){
        r.Move(-5,0);
    }
    r.pastvaluex = arg1;

}

void MainWindow::on_spinBox_1_y_valueChanged(int arg1)
{
    if(arg1 < r.pastvaluey){
        r.Move(0,5);
    }
    else if(arg1 == r.pastvaluey){
        r.Move(0,0);

    }
    else if(arg1 > r.pastvaluey){
        r.Move(0,-5);
    }

   r.pastvaluey = arg1;
}







///////////////////////////////////동그라미/////////////////////////////
void MainWindow::on_pushButton_2_draw_clicked()
{
    c.Draw(scene);
}
void MainWindow::on_dial_2_rotation_valueChanged(int value)
{
    c.Rotaion(value);
}
void MainWindow::on_spinBox_1_x_2_valueChanged(int arg1)
{
    qDebug()<<arg1;

    if(arg1 > c.pastvaluex){
        c.Move(5,0);
    }
    else if(arg1 == c.pastvaluex){
        c.Move(0,0);

    }
    else if(arg1 < c.pastvaluex){
        c.Move(-5,0);
    }
    c.pastvaluex = arg1;

}


void MainWindow::on_spinBox_1_y_2_valueChanged(int arg1)
{
    if(arg1 < c.pastvaluey){
        c.Move(0,5);
    }
    else if(arg1 == c.pastvaluey){
        c.Move(0,0);

    }
    else if(arg1 > c.pastvaluey){
        c.Move(0,-5);
    }

   c.pastvaluey = arg1;
}





///////////////////////////////////세모//////////////////////////////
void MainWindow::on_pushButton_3_draw_clicked()
{
    t.Draw(scene);
}



void MainWindow::on_dial_3_rotation_valueChanged(int value)
{
    t.Rotaion(value);
}

void MainWindow::on_spinBox_1_x_3_valueChanged(int arg1)
{
    qDebug()<<arg1;

    if(arg1 > t.pastvaluex){
        t.Move(5,0);
    }
    else if(arg1 == t.pastvaluex){
        t.Move(0,0);

    }
    else if(arg1 < t.pastvaluex){
        t.Move(-5,0);
    }
    t.pastvaluex = arg1;
}


void MainWindow::on_spinBox_1_y_3_valueChanged(int arg1)
{
    if(arg1 < t.pastvaluey){
        t.Move(0,5);
    }
    else if(arg1 == t.pastvaluey){
        t.Move(0,0);

    }
    else if(arg1 > t.pastvaluey){
        t.Move(0,-5);
    }

   t.pastvaluey = arg1;
}

