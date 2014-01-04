#ifndef MYQGRAPHICSVIEW_H
#define MYQGRAPHICSVIEW_H

#include <QGraphicsView>

class MyQGraphicsView : public QGraphicsView
{
public:
    explicit MyQGraphicsView(QWidget *parent = 0);
    MyQGraphicsView(QGraphicsScene *scene, QWidget *parent = 0);

public slots:
    void mouseReleaseEvent(QMouseEvent *event);
    void drawLine();
    void reset();

private:
    short int count;
    QImage img;
    QGraphicsScene *scene;
    QPointF p1, p2;

    QRgb color;
};

#endif // MYQGRAPHICSVIEW_H
