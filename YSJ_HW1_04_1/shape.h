#ifndef SHAPE_H
#define SHAPE_H


#include <QMainWindow>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>

class Shape{


public:
     //MyFigure();
    //~MyFigure();
    virtual void Draw(QGraphicsScene * s)=0;
    virtual void Rotaion(int value)=0;
    virtual void Move(int x, int y)=0;

private:


protected:

};

class circle : public Shape{


public:

    int pastvaluex;
    int pastvaluey;
    circle(){pastvaluex = 0;pastvaluey = 0;};


    QGraphicsEllipseItem * redcircle;
    virtual void Draw(QGraphicsScene * s)override{

            //QGraphicsEllipseItem * c = redcircle;

            redcircle = s-> addEllipse(0,0,100,100);
            redcircle ->setPen(Qt::NoPen);
            redcircle ->setFlag(QGraphicsItem::ItemIsSelectable);
            redcircle ->setBrush(QBrush(Qt::red));
            redcircle ->setTransformOriginPoint(0,0);

    };
    virtual void Rotaion(int value)override{

        redcircle->show();
        redcircle->setRotation(value);



    };
    virtual void Move(int x, int y)override{

          redcircle -> moveBy(x,y);
    };

private:


protected:


};



class Rectangle : public Shape{


public:
    Rectangle(){pastvaluex = 0;pastvaluey = 0;};
    //~Rectangle(){};

    int pastvaluex;
    int pastvaluey;

    QGraphicsRectItem * greenRect;
    virtual void Draw(QGraphicsScene * s)override{


        greenRect = s->addRect(0,0,100,100,QPen(Qt::green));
        greenRect->setPen(Qt::NoPen);
        greenRect->setFlag(QGraphicsItem::ItemIsSelectable);
        greenRect->setBrush(QBrush(Qt::green));
        greenRect->setTransformOriginPoint(50,50);

    };
    virtual void Rotaion(int value)override{



        greenRect->show();
        greenRect->setRotation(value);



    };
    virtual void Move(int x, int y)override{

        greenRect -> moveBy(x,y);


    };

private:


protected:


};

class triangle : public Shape{


public:

    triangle(){pastvaluex = 0;pastvaluey = 0;};
    int pastvaluex;
    int pastvaluey;


    QGraphicsPolygonItem* bluetriangle;
    virtual void Draw( QGraphicsScene * s)override{

            //QGraphicsPolygonItem * t = bluetriangle;

            QPolygonF Triangle;
            // 삼각형을 그린다 , 삼각형의 하단 왼쪽 좌표
            Triangle.append(QPointF(-100.,0));
             // 삼각형의 하단 오른쪽 좌표
            Triangle.append(QPointF(0.,-100));
            // 삼각형의 상단 중앙(중심) 좌표
            Triangle.append(QPointF(100.,0));
            //Triangle.append(QPointF(-100.,0));

            bluetriangle = s-> addPolygon(Triangle,QPen(Qt::green),QBrush(Qt::blue));
            bluetriangle->setTransformOriginPoint(0,-30);


    };
    virtual void Rotaion(int value)override{

        bluetriangle->show();
        bluetriangle->setRotation(value);


    };
    virtual void Move(int x, int y)override{

            bluetriangle -> moveBy(x,y);
    };

private:


protected:


};



#endif // SHAPE_H
