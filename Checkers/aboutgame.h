#ifndef ABOUTGAME_H
#define ABOUTGAME_H
#include <QPainter>
#include <QWidget>
#include <QPixmap>
#include <QKeyEvent>
#include <QDebug>
class about_game : public QWidget
{
    Q_OBJECT

public:
    explicit about_game()
    {
        setStyleSheet("background-color:white;");
        page_1 = new QPixmap(":/page_1.png");
        page_2 = new QPixmap(":/page_2.png");
        page_3 = new QPixmap(":/page_3.png");
        page_4 = new QPixmap(":/page_4.png");
        page_5 = new QPixmap(":/page_5.png");
        page_6 = new QPixmap(":/page_6.png");
        page_7 = new QPixmap(":/page_7.png");
        page = 1;
    }
protected:
    void paintEvent(QPaintEvent*){
        QPainter painter2;
        painter2.begin(this);
        painter2.setPen(Qt::black);
        QFont font=painter2.font() ;
        font.setPointSize(12);
        painter2.setFont(font);
        if(page == 1){
           painter2.drawPixmap(0,0,*page_1);
        }
        if(page == 2){
           painter2.drawPixmap(0,0,*page_2);
        }
        if(page == 3){
           painter2.drawPixmap(0,0,*page_3);
        }
        if(page == 4){
           painter2.drawPixmap(0,0,*page_4);
        }
        if(page == 5){
           painter2.drawPixmap(0,0,*page_5);
        }
        if(page == 6){
           painter2.drawPixmap(0,0,*page_6);
        }
        if(page == 7){
           painter2.drawPixmap(0,0,*page_7);
        }
        QRect rec(350,610,50,20);
        painter2.drawRect(rec);
        if(page == 1) temp = "  1 / 7";
        if(page == 2) temp = "  2 / 7";
        if(page == 3) temp = "  3 / 7";
        if(page == 4) temp = "  4 / 7";
        if(page == 5) temp = "  5 / 7";
        if(page == 6) temp = "  6 / 7";
        if(page == 7) temp = "  7 / 7";
        painter2.drawText(rec,temp);
        painter2.drawText(312,625,"Page");
        painter2.end();
    }


    void keyPressEvent(QKeyEvent *event){
        if(event->key() == Qt::Key_Right && page < 7){
            page++;
            repaint();
        }
        if(event->key() == Qt::Key_Left && page > 1){
            page--;
            repaint();
        }
    }
private:
    int page;
    QPixmap* page_1;
    QPixmap* page_2;
    QPixmap* page_3;
    QPixmap* page_4;
    QPixmap* page_5;
    QPixmap* page_6;
    QPixmap* page_7;
    QString temp;

};


#endif // ABOUTGAME_H
