#ifndef WIDGET_H
#define WIDGET_H

#include "aboutgame.h"
#include <QWidget>
#include <QPushButton>
#include <QColor>
#include "coins.h"
#include <QPainter>
#include <QColor>

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    QAction* pCheckableAction;
    QAction* pCheckableAction2;
    QAction* chooseboard1;
    QAction* chooseboard2;

protected:
    void paintEvent(QPaintEvent * event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
private slots:
    void FNewGame();
    void ChangeYellow();
    void ChangeBlack();
    void setboard1();
    void setboard2();
    void slotfunc(){
        game.resize(700,640);
        game.show();
    }
private:
    void Damkaov_qayl(int,int,int,int);
    bool Stugum(QString type); // endhanur stugum
    bool Stugum1(coins temp);//konkret xaxaqari stugum
    bool Damkaov_utel(coins temp);
    coins qarer[24];
    bool Dashter[10][10];
    QString sxmaci_type;
    QString hakarak_type;
    QString Black;
    QString Yellow;
    QString Kerac;
    QPixmap* dexin;
    QPixmap* sev;
    QPixmap* sev_damka;
    QPixmap* dexin_damka;
    QPixmap* board;
    QPixmap* board3;
    QString* zangvac;
    QString* zangvac2;
    QString* tarer;
    int qayleriqanak;
    int qayleriqanak2;
    coins ptixaxas;
    bool m_ptixaxas;
    bool ptiutes;
    int a; //a-ov voroshvum a te vorerordi vra es sxmec coins-ic
    int sxmac_x;
    int sxmac_y;
    bool playercolor;
    about_game game;

};

#endif // WIDGET_H
