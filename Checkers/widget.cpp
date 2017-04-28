#include "widget.h"
#include "coins.h"
#include <QDebug>
#include <QPainter>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMouseEvent>
#include <QMoveEvent>
#include <cstdlib>
#include <QString>
#include <QMessageBox>
#include <QPaintEvent>
#include<QStyle>
#include<QStyleOption>
#include <QColor>
Widget::Widget(QWidget *parent) :
     QWidget(parent)
{
    resize(950,600);
    //setMouseTracking(true);
    dexin = new QPixmap(":/dexin2.gif");
    sev = new QPixmap(":/sev2.gif");
    sev_damka = new QPixmap(":/sev_damka2.gif");
    dexin_damka = new QPixmap(":/dexin_damka2.gif");
    board = new QPixmap(":/board.jpg");
    board3 = new QPixmap(":/board3.jpg");
    playercolor = true;
    pCheckableAction = new QAction(this);
    pCheckableAction2 = new QAction(this);
    chooseboard1 = new QAction(this);
    chooseboard2 = new QAction(this);
    Black = "Black";   // type
    Yellow = "Yellow";
    Kerac = "Kerac";
    sxmaci_type = Black;
    qayleriqanak = 0;
    qayleriqanak2 = 0;
    zangvac = new QString[100];
    zangvac2 = new QString[100];
    tarer = new QString[8];
    tarer[0] = 'A';
    tarer[1] = 'B';
    tarer[2] = 'C';
    tarer[3] = 'D';
    tarer[4] = 'E';
    tarer[5] = 'F';
    tarer[6] = 'G';
    tarer[7] = 'H';
    FNewGame();
 }
void Widget::FNewGame(){
    ptiutes = false;
    m_ptixaxas = false;
    if(playercolor == true){
    qarer[0].setall(3,2,false,sev,Black);
    qarer[1].setall(5,2,false,sev,Black);
    qarer[2].setall(7,2,false,sev,Black);
    qarer[3].setall(9,2,false,sev,Black);
    qarer[4].setall(2,3,false,sev,Black);
    qarer[5].setall(4,3,false,sev,Black);
    qarer[6].setall(6,3,false,sev,Black);
    qarer[7].setall(8,3,false,sev,Black);
    qarer[8].setall(3,4,false,sev,Black);
    qarer[9].setall(5,4,false,sev,Black);
    qarer[10].setall(7,4,false,sev,Black);
    qarer[11].setall(9,4,false,sev,Black);
    qarer[12].setall(2,7,false,dexin,Yellow);
    qarer[13].setall(4,7,false,dexin,Yellow);
    qarer[14].setall(6,7,false,dexin,Yellow);
    qarer[15].setall(8,7,false,dexin,Yellow);
    qarer[16].setall(3,8,false,dexin,Yellow);
    qarer[17].setall(5,8,false,dexin,Yellow);
    qarer[18].setall(7,8,false,dexin,Yellow);
    qarer[19].setall(9,8,false,dexin,Yellow);
    qarer[20].setall(2,9,false,dexin,Yellow);
    qarer[21].setall(4,9,false,dexin,Yellow);
    qarer[22].setall(6,9,false,dexin,Yellow);
    qarer[23].setall(8,9,false,dexin,Yellow);
    sxmaci_type = Black;
    }else{
        qarer[0].setall(3,2,false,dexin,Yellow);
        qarer[1].setall(5,2,false,dexin,Yellow);
        qarer[2].setall(7,2,false,dexin,Yellow);
        qarer[3].setall(9,2,false,dexin,Yellow);
        qarer[4].setall(2,3,false,dexin,Yellow);
        qarer[5].setall(4,3,false,dexin,Yellow);
        qarer[6].setall(6,3,false,dexin,Yellow);
        qarer[7].setall(8,3,false,dexin,Yellow);
        qarer[8].setall(3,4,false,dexin,Yellow);
        qarer[9].setall(5,4,false,dexin,Yellow);
        qarer[10].setall(7,4,false,dexin,Yellow);
        qarer[11].setall(9,4,false,dexin,Yellow);
        qarer[12].setall(2,7,false,sev,Black);
        qarer[13].setall(4,7,false,sev,Black);
        qarer[14].setall(6,7,false,sev,Black);
        qarer[15].setall(8,7,false,sev,Black);
        qarer[16].setall(3,8,false,sev,Black);
        qarer[17].setall(5,8,false,sev,Black);
        qarer[18].setall(7,8,false,sev,Black);
        qarer[19].setall(9,8,false,sev,Black);
        qarer[20].setall(2,9,false,sev,Black);
        qarer[21].setall(4,9,false,sev,Black);
        qarer[22].setall(6,9,false,sev,Black);
        qarer[23].setall(8,9,false,sev,Black);
        sxmaci_type = Yellow;
    }
    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 10;j++){
            Dashter[i][j] = false;
        }
    }
    for(int i = 0;i < 24;i++){
        qarer[i].set_m_shexum_x(0);
        qarer[i].set_m_shexum_y(0);
    }
    Dashter[3][2] = true;
    Dashter[5][2] = true;
    Dashter[7][2] = true;
    Dashter[9][2] = true;
    Dashter[2][3] = true;
    Dashter[4][3] = true;
    Dashter[6][3] = true;
    Dashter[8][3] = true;
    Dashter[3][4] = true;
    Dashter[5][4] = true;
    Dashter[7][4] = true;
    Dashter[9][4] = true;
    Dashter[2][7] = true;
    Dashter[4][7] = true;
    Dashter[6][7] = true;
    Dashter[8][7] = true;
    Dashter[3][8] = true;
    Dashter[5][8] = true;
    Dashter[7][8] = true;
    Dashter[9][8] = true;
    Dashter[2][9] = true;
    Dashter[4][9] = true;
    Dashter[6][9] = true;
    Dashter[8][9] = true;

    for(int i = 0;i < qayleriqanak;i++){
        zangvac[i].clear();
    }
    for(int i = 0;i < qayleriqanak2;i++){
        zangvac2[i].clear();
    }
    qayleriqanak = 0;
    qayleriqanak2 = 0;
    repaint();
}
void Widget::paintEvent(QPaintEvent* ){
    QPainter painter(this);
    painter.drawPixmap(0,0,*board3);
    painter.drawPixmap(68,65,460,462,*board);
    for(int i = 0;i < 24;i++){
        if(qarer[i].get_type() == Kerac){
            painter.drawPixmap(qarer[i].get_x(), qarer[i].get_y(), 40, 40, *qarer[i].get_nkar());
        }else {
            painter.drawPixmap(qarer[i].get_x() * 50 + qarer[i].get_shexum_x(),
                               qarer[i].get_y() * 50 + qarer[i].get_shexum_y(),
                               40, 40, *qarer[i].get_nkar());
        }
    }
    QFont font=painter.font() ;
    font.setPointSize(16);
    painter.setFont(font);
    if(playercolor){
        painter.drawText(570,100,"Yellow       Purple");
    }else{
        painter.drawText(570,100,"Purple       Yellow");
    }
    int x_ket,x_ket2;
    int y_ket = 125;
    int y_ket2 = 125;
    if(playercolor){
        x_ket = 570;
        x_ket2 = 670;
    }else {
        x_ket = 670;
        x_ket2 = 570;
    }
    for(int i = 1;i <= qayleriqanak;i++){
        painter.drawText(x_ket,y_ket,zangvac[i - 1]);
            y_ket += 30;
    }

    for(int i = 1;i <= qayleriqanak2;i++){
        painter.drawText(x_ket2,y_ket2,zangvac2[i - 1]);
            y_ket2 += 30;
    }
    int x3 = 550;
    int y3 = 125;

    int j = qayleriqanak >= qayleriqanak2 ? qayleriqanak : qayleriqanak2;
    for(int i = 0;i < j;i++){
        painter.drawText(x3 - 10,y3,QString::number(i+1) + ".");
        y3 += 30;
    }
    painter.end();
}
void Widget::mousePressEvent(QMouseEvent *event){
    if(event->button() == Qt::RightButton){
        return;
    }
    sxmac_x = (event->x() - event->x() % 50)/50;
    sxmac_y = (event->y() - event->y() % 50)/50;
    a = -1; // a - ov voroshvum a te vorerord qari vra a sxmvel` zangvacic
    if(sxmaci_type == Black){
        hakarak_type = Yellow;
    }else hakarak_type = Black;
    for(int i = 0;i < 24;i++){
        if(qarer[i].get_x() == sxmac_x && qarer[i].get_y() == sxmac_y){
            a = i;
        }
    }
    if(m_ptixaxas == true && qarer[a] != ptixaxas && a!= -1){
        QMessageBox::warning(this,tr("STOP"),tr("dranov che!"));
    }else if(qarer[a].get_type() == sxmaci_type && a != -1){
        QMessageBox::warning(this,tr("STOP"),tr("qo herte chi!"));
    }else if(a != -1){
        hakarak_type = sxmaci_type;
        sxmaci_type = qarer[a].get_type();
    }
    repaint();
}
void Widget::mouseReleaseEvent(QMouseEvent *event){
    if(event->button() == Qt::RightButton || a == -1){
        return;
    }
    int x1 = (event->x() - event->x() % 50)/50;
    int y1 = (event->y() - event->y() % 50)/50;
    int i;
    if(Dashter[x1][y1] == true){
        sxmaci_type = hakarak_type;
    }else if(sxmac_x == x1 && sxmac_y == y1){
        sxmaci_type = hakarak_type;
    }else if(x1 > 9 || y1 > 9 || x1 < 2 || y1 < 2){
            sxmaci_type = hakarak_type;
    }else if(sxmac_y - y1 == 1 && ((sxmaci_type  != Yellow && playercolor) || (sxmaci_type  != Black && !playercolor))){
        sxmaci_type = hakarak_type;
    }else if(sxmac_y - y1 == -1 && ((sxmaci_type  != Black && playercolor) || (sxmaci_type  != Yellow && !playercolor))){
        sxmaci_type = hakarak_type;
    }else if(qarer[a].get_damka() == true){
       Damkaov_qayl(sxmac_x,sxmac_y,x1,y1);
    }
    else if(sxmac_y - y1 == 2 && sxmac_x - x1 == 2){
        for(i = 0;i < 24;i++){
                if(qarer[i].get_x() == sxmac_x - 1 && qarer[i].get_y() == sxmac_y - 1
                        && qarer[i].get_type() == hakarak_type){
                    qarer[i].set_type(Kerac);
                    Dashter[qarer[i].get_x()][qarer[i].get_y()] = false;
                    qarer[i].set_x(750 + rand() % 100);
                    qarer[i].set_y(100 + rand() % 300);
                    qarer[a].set_x(x1);
                    qarer[a].set_y(y1);
                    Dashter[sxmac_x][sxmac_y] = false;
                    Dashter[x1][y1] = true;
                    ptiutes = false;
                    m_ptixaxas = false;
                    if(y1 == 2 && ((sxmaci_type == Yellow &&  playercolor) || (sxmaci_type == Black &&  !playercolor))){
                    qarer[a].set_damka(true);
                        if(playercolor)qarer[a].set_nkar(dexin_damka);
                        else qarer[a].set_nkar(sev_damka);
                    }else if(y1 == 9  && ((sxmaci_type == Black &&  playercolor) || (sxmaci_type == Yellow &&  !playercolor))){
                        qarer[a].set_damka(true);
                        if(playercolor)qarer[a].set_nkar(sev_damka);
                        else qarer[a].set_nkar(dexin_damka);
                    }
                    if(sxmaci_type == Yellow){
                        zangvac[qayleriqanak] = tarer[sxmac_x - 2] + QString::number(10 - sxmac_y) + "  - " +
                                            tarer[x1-2] + QString::number(10 - y1);
                        qayleriqanak++;
                    }else{
                        zangvac2[qayleriqanak2] = tarer[sxmac_x - 2] + QString::number(10 - sxmac_y) + "  - " +
                                            tarer[x1-2] + QString::number(10 - y1);
                        qayleriqanak2++;
                    }

                    //QSound::play("C:\Users\Ashot\Desktop\prof_shashki\qayl1.wav");
                    if(Stugum1(qarer[a])){
                        if(sxmaci_type == Yellow){
                            zangvac2[qayleriqanak2] = " ";
                            qayleriqanak2++;
                        }else {
                            zangvac[qayleriqanak] = " ";
                            qayleriqanak++;
                        }
                        ptixaxas = qarer[a];
                        m_ptixaxas = true;
                        ptiutes = true;
                        sxmaci_type = hakarak_type;
                    }
                    break;
                }
                if(i == 24){
                    QMessageBox::warning(this,tr("STOP"),tr("չես կարա4!"));
                    sxmaci_type = hakarak_type;
                }
             }
    }
    else if(sxmac_y - y1 == 2 && sxmac_x - x1 == -2){
           for(i = 0;i < 24;i++){
              if(qarer[i].get_x() == sxmac_x + 1 && qarer[i].get_y() == sxmac_y - 1
                      && qarer[i].get_type() == hakarak_type){
                        qarer[i].set_type(Kerac);
                        Dashter[qarer[i].get_x()][qarer[i].get_y()] = false;
                        qarer[i].set_x(750 + rand() % 100);
                        qarer[i].set_y(100 + rand() % 300);
                        qarer[a].set_x(x1);
                        qarer[a].set_y(y1);
                        Dashter[sxmac_x][sxmac_y] = false;
                        Dashter[x1][y1] = true;
                        ptiutes = false;
                        m_ptixaxas = false;
                        if(y1 == 2 && ((sxmaci_type == Yellow &&  playercolor) || (sxmaci_type == Black &&  !playercolor))){
                        qarer[a].set_damka(true);
                            if(playercolor)qarer[a].set_nkar(dexin_damka);
                            else qarer[a].set_nkar(sev_damka);
                        }else if(y1 == 9  && ((sxmaci_type == Black &&  playercolor) || (sxmaci_type == Yellow &&  !playercolor))){
                            qarer[a].set_damka(true);
                            if(playercolor)qarer[a].set_nkar(sev_damka);
                            else qarer[a].set_nkar(dexin_damka);
                        }
                        if(sxmaci_type == Yellow){
                            zangvac[qayleriqanak] = tarer[sxmac_x - 2] + QString::number(10 - sxmac_y) + "  - " +
                                                tarer[x1-2] + QString::number(10 - y1);
                            qayleriqanak++;
                        }else{
                            zangvac2[qayleriqanak2] = tarer[sxmac_x - 2] + QString::number(10 - sxmac_y) + "  - " +
                                                tarer[x1-2] + QString::number(10 - y1);
                            qayleriqanak2++;
                        }
                        if(Stugum1(qarer[a])){
                            if(sxmaci_type == Yellow){
                                zangvac2[qayleriqanak2] = " ";
                                qayleriqanak2++;
                            }else {
                                zangvac[qayleriqanak] = " ";
                                qayleriqanak++;
                            }
                            ptixaxas = qarer[a];
                            m_ptixaxas = true;
                            ptiutes = true;
                            sxmaci_type = hakarak_type;
                        }

                        //QSound::play("C:\Users\Ashot\Desktop\prof_shashki\qayl1.wav");                        break;
                    }
                    if(i == 24){
                        QMessageBox::warning(this,tr("STOP"),tr("չես կարա6!"));
                        sxmaci_type = hakarak_type;
                    }
                 }
        }
    else if(sxmac_y - y1 == -2 && sxmac_x - x1 == 2){
                for(i = 0;i < 24;i++){
                    if(qarer[i].get_x() == sxmac_x - 1 && qarer[i].get_y() == sxmac_y + 1
                            && qarer[i].get_type() == hakarak_type){
                        qarer[i].set_type(Kerac);
                        Dashter[qarer[i].get_x()][qarer[i].get_y()] = false;
                        qarer[i].set_x(750 + rand() % 100);
                        qarer[i].set_y(100 + rand() % 300);
                        qarer[a].set_x(x1);
                        qarer[a].set_y(y1);
                        Dashter[sxmac_x][sxmac_y] = false;
                        Dashter[x1][y1] = true;
                        ptiutes = false;
                        m_ptixaxas = false;
                        if(y1 == 2 && ((sxmaci_type == Yellow &&  playercolor) || (sxmaci_type == Black &&  !playercolor))){
                        qarer[a].set_damka(true);
                            if(playercolor)qarer[a].set_nkar(dexin_damka);
                            else qarer[a].set_nkar(sev_damka);
                        }else if(y1 == 9  && ((sxmaci_type == Black &&  playercolor) || (sxmaci_type == Yellow &&  !playercolor))){
                            qarer[a].set_damka(true);
                            if(playercolor)qarer[a].set_nkar(sev_damka);
                            else qarer[a].set_nkar(dexin_damka);
                        }
                        if(sxmaci_type == Yellow){
                            zangvac[qayleriqanak] = tarer[sxmac_x - 2] + QString::number(10 - sxmac_y) + "  - " +
                                                tarer[x1-2] + QString::number(10 - y1);
                            qayleriqanak++;
                        }else{
                            zangvac2[qayleriqanak2] = tarer[sxmac_x - 2] + QString::number(10 - sxmac_y) + "  - " +
                                                tarer[x1-2] + QString::number(10 - y1);
                            qayleriqanak2++;
                        }
                        if(Stugum1(qarer[a])){
                            if(sxmaci_type == Yellow){
                                zangvac2[qayleriqanak2] = " ";
                                qayleriqanak2++;
                            }else {
                                zangvac[qayleriqanak] = " ";
                                qayleriqanak++;
                            }
                            ptixaxas = qarer[a];
                            m_ptixaxas = true;
                            ptiutes = true;
                            sxmaci_type = hakarak_type;
                        }

                        //QSound::play("C:\Users\Ashot\Desktop\prof_shashki\qayl1.wav");
                        break;
                    }
                    if(i == 24){
                        QMessageBox::warning(this,tr("STOP"),tr("չես կարա8!"));
                        sxmaci_type = hakarak_type;
                    }
                 }

        }
    else if(sxmac_y - y1 == -2 && sxmac_x - x1 == -2){
                for(i = 0;i < 24;i++){
                    if(qarer[i].get_x() == sxmac_x + 1 && qarer[i].get_y() == sxmac_y + 1
                            && qarer[i].get_type() == hakarak_type){
                        qarer[i].set_type(Kerac);
                        Dashter[qarer[i].get_x()][qarer[i].get_y()] = false;
                        qarer[i].set_x(750 + rand() % 100);
                        qarer[i].set_y(100 + rand() % 300);
                        qarer[a].set_x(x1);
                        qarer[a].set_y(y1);
                        Dashter[sxmac_x][sxmac_y] = false;
                        Dashter[x1][y1] = true;
                        ptiutes = false;
                        m_ptixaxas = false;
                        if(y1 == 2 && ((sxmaci_type == Yellow &&  playercolor) || (sxmaci_type == Black &&  !playercolor))){
                        qarer[a].set_damka(true);
                            if(playercolor)qarer[a].set_nkar(dexin_damka);
                            else qarer[a].set_nkar(sev_damka);
                        }else if(y1 == 9  && ((sxmaci_type == Black &&  playercolor) || (sxmaci_type == Yellow &&  !playercolor))){
                            qarer[a].set_damka(true);
                            if(playercolor)qarer[a].set_nkar(sev_damka);
                            else qarer[a].set_nkar(dexin_damka);
                        }
                        if(sxmaci_type == Yellow){
                            zangvac[qayleriqanak] = tarer[sxmac_x - 2] + QString::number(10 - sxmac_y) + "  - " +
                                                tarer[x1-2] + QString::number(10 - y1);
                            qayleriqanak++;
                        }else{
                            zangvac2[qayleriqanak2] = tarer[sxmac_x - 2] + QString::number(10 - sxmac_y) + "  - " +
                                                tarer[x1-2] + QString::number(10 - y1);
                            qayleriqanak2++;
                        }
                        if(Stugum1(qarer[a])){
                            if(sxmaci_type == Yellow){
                                zangvac2[qayleriqanak2] = " ";
                                qayleriqanak2++;
                            }else {
                                zangvac[qayleriqanak] = " ";
                                qayleriqanak++;
                            }
                            ptixaxas = qarer[a];
                            m_ptixaxas = true;
                            ptiutes = true;
                            sxmaci_type = hakarak_type;
                        }

                       //QSound::play("C:\Users\Ashot\Desktop\prof_shashki\qayl1.wav");
                        break;
                    }
                    if(i == 24){
                        QMessageBox::warning(this,tr("STOP"),tr("չես կարա10!"));
                        sxmaci_type = hakarak_type;
                    }
                 }

        }else if(ptiutes){
            QMessageBox::warning(this,tr("STOP"),tr("ptiutes!"));
            sxmaci_type = hakarak_type;
        }else if((sxmac_x - x1 == 1 || sxmac_x - x1 == -1)
            && (sxmac_y - y1 == -1 || sxmac_y - y1 == 1)){
                if(y1 == 2 && ((sxmaci_type == Yellow &&  playercolor) || (sxmaci_type == Black &&  !playercolor))){
                qarer[a].set_damka(true);
                    if(playercolor)qarer[a].set_nkar(dexin_damka);
                    else qarer[a].set_nkar(sev_damka);
                }else if(y1 == 9  && ((sxmaci_type == Black &&  playercolor) || (sxmaci_type == Yellow &&  !playercolor))){
                    qarer[a].set_damka(true);
                    if(playercolor)qarer[a].set_nkar(sev_damka);
                    else qarer[a].set_nkar(dexin_damka);
                }
                qarer[a].set_x(x1);
                qarer[a].set_y(y1);
                Dashter[sxmac_x][sxmac_y] = false;
                Dashter[x1][y1] = true;
                Stugum(hakarak_type);
                if(sxmaci_type == Yellow){
                    zangvac[qayleriqanak] = tarer[sxmac_x - 2] + QString::number(10 - sxmac_y) + "  - " +
                                        tarer[x1-2] + QString::number(10 - y1);
                    qayleriqanak++;
                }else{
                    zangvac2[qayleriqanak2] = tarer[sxmac_x - 2] + QString::number(10 - sxmac_y) + "  - " +
                                        tarer[x1-2] + QString::number(10 - y1);
                    qayleriqanak2++;
                }
                //QSound::play("C:\Users\Ashot\Desktop\prof_shashki\qayl1.wav");
    }else{
        sxmaci_type = hakarak_type;
    }

    qarer[a].set_m_shexum_x(0);
    qarer[a].set_m_shexum_y(0);
    repaint();
}
bool Widget::Stugum(QString type){
         for(int i = 0;i < 24;i++){
            if(qarer[i].get_type() != type){
                continue;
            }
            if(Stugum1(qarer[i])){
                ptiutes = true;
                return true;
            }
        }

    return false;
}
bool Widget::Stugum1(coins temp){

    if(temp.get_damka() == true){
        return Damkaov_utel(temp);
    }
       for(int i = 0;i < 24;i++){
           if(qarer[i].get_x() == temp.get_x()-1 && qarer[i].get_y() == temp.get_y() - 1
                   && Dashter[temp.get_x()-2][temp.get_y() - 2] == false && temp.get_x()-2 >= 2
                   && temp.get_y() - 2 >= 2 && qarer[i].get_type() != temp.get_type()){
               return true;
           }
           if(qarer[i].get_x() == temp.get_x()+1 && qarer[i].get_y() == temp.get_y() + 1
                   && Dashter[temp.get_x()+2][temp.get_y() + 2] == false && temp.get_x()+2 <= 9
                   && temp.get_y() + 2 <= 9 && qarer[i].get_type() != temp.get_type()){
               return true;
           }
           if(qarer[i].get_x() == temp.get_x()-1 && qarer[i].get_y() == temp.get_y() + 1
                   && Dashter[temp.get_x()-2][temp.get_y() + 2] == false && temp.get_x()-2 >= 2
                   && temp.get_y() + 2 <= 9 && qarer[i].get_type() != temp.get_type()){
               return true;
           }
           if(qarer[i].get_x() == temp.get_x()+1 && qarer[i].get_y() == temp.get_y() - 1
                   && Dashter[temp.get_x()+2][temp.get_y() - 2] == false && temp.get_x()+2 <= 9
                   && temp.get_y() - 2 >= 2 && qarer[i].get_type() != temp.get_type()){
               return true;
           }

       }
       return false;



}
void Widget::Damkaov_qayl(int x1, int y1,int x2, int y2){

    if(sxmaci_type == Yellow){
        qDebug() << "Yellow";
    }else{
        qDebug() << "Black";
    }
    int qanak; // hakarak guyneri qanake
    int p1;
    if(x1 - x2 == y1 - y2 && x1 - x2 > 0){
    qDebug() << "1";
        qanak = 0;
        for(int i = x1 - 1,j = y1 - 1;i != x2 && j != y2;i--,j--){
                        qDebug() << "11";
            for(int p = 0;p < 24;p++){
               if(qarer[p].get_x() == i && qarer[p].get_y() == j && qarer[p].get_type() != hakarak_type){
                   QMessageBox::warning(this,tr("STOP"),tr("չես կարա14!"));
                   sxmaci_type = hakarak_type;
                   break;
               }else if(qarer[p].get_x() == i && qarer[p].get_y() == j && qarer[p].get_type() == hakarak_type){
                   qanak++;
                   p1 = p;
            }
        }
        if(qanak == 0){
                qarer[a].set_x(x2);
                qarer[a].set_y(y2);
                Dashter[x1][y1] = false;
                Dashter[x2][y2] = true;
                Stugum(hakarak_type);
                //QSound::play("C:\Users\Ashot\Desktop\prof_shashki\qayl1.wav");
        }else if(qanak > 1){
            QMessageBox::warning(this,tr("STOP"),tr("չես կարա16!"));
            sxmaci_type = hakarak_type;
        }else{
            Dashter[x1][y1] = false;
            Dashter[x2][y2] = true;
            qarer[p1].set_type(Kerac);
            Dashter[qarer[p1].get_x()][qarer[p1].get_y()] = false;
            qarer[p1].set_x(750 + rand() % 100);
            qarer[p1].set_y(rand() % 600);
            qarer[a].set_x(x2);
            qarer[a].set_y(y2);
            ptiutes = false;
            m_ptixaxas = false;
            if(Damkaov_utel(qarer[a])){
                ptiutes = true;
                m_ptixaxas = true;
                ptixaxas = qarer[a];
                sxmaci_type = hakarak_type;
            }
            //QSound::play("C:\\Users\\ashot\\Documents\\Projects\\My projects\\shashki\\qayl1.wav");
         }
      }
    }else if(x1 - x2 == y1 - y2 && x1 - x2 < 0){
        qDebug() << "2";
        qanak = 0;
        for(int i = x1 + 1,j = y1 + 1;i != x2 && j != y2;i++,j++){
                        qDebug() << "22";
            for(int p = 0;p < 24;p++){
               if(qarer[p].get_x() == i && qarer[p].get_y() == j && qarer[p].get_type() != hakarak_type){
                   QMessageBox::warning(this,tr("STOP"),tr("չես կարա14!"));
                   sxmaci_type = hakarak_type;
                   break;
               }else if(qarer[p].get_x() == i && qarer[p].get_y() == j && qarer[p].get_type() == hakarak_type){
                   qanak++;
                   p1 = p;
            }
        }
        if(qanak == 0){
                qarer[a].set_x(x2);
                qarer[a].set_y(y2);
                Dashter[x1][y1] = false;
                Dashter[x2][y2] = true;
                Stugum(hakarak_type);
                //QSound::play("C:\Users\Ashot\Desktop\prof_shashki\qayl1.wav");
        }else if(qanak > 1){
            QMessageBox::warning(this,tr("STOP"),tr("չես կարա16!"));
            sxmaci_type = hakarak_type;
        }else{
            Dashter[x1][y1] = false;
            Dashter[x2][y2] = true;
            qarer[p1].set_type(Kerac);
            Dashter[qarer[p1].get_x()][qarer[p1].get_y()] = false;
            qarer[p1].set_x(750 + rand() % 100);
            qarer[p1].set_y(rand() % 600);
            qarer[a].set_x(x2);
            qarer[a].set_y(y2);
            ptiutes = false;
            m_ptixaxas = false;
            if(Damkaov_utel(qarer[a])){
                ptiutes = true;
                m_ptixaxas = true;
                ptixaxas = qarer[a];
                sxmaci_type = hakarak_type;
            }
            //QSound::play("C:\\Users\\ashot\\Documents\\Projects\\My projects\\shashki\\qayl1.wav");
         }
      }
    }else if(x1 - x2 == y2 - y1 && x1 - x2 > 0){
        qDebug() << "3";
        qanak = 0;
        for(int i = x1 - 1,j = y1 + 1;i != x2 && j != y2;i--,j++){
            qDebug() << "33";
            for(int p = 0;p < 24;p++){
               if(qarer[p].get_x() == i && qarer[p].get_y() == j && qarer[p].get_type() != hakarak_type){
                   QMessageBox::warning(this,tr("STOP"),tr("չես կարա14!"));
                   sxmaci_type = hakarak_type;
                   break;
               }else if(qarer[p].get_x() == i && qarer[p].get_y() == j && qarer[p].get_type() == hakarak_type){
                   qanak++;
                   p1 = p;
            }
        }
        if(qanak == 0){
                qarer[a].set_x(x2);
                qarer[a].set_y(y2);
                Dashter[x1][y1] = false;
                Dashter[x2][y2] = true;
                Stugum(hakarak_type);
                //QSound::play("C:\Users\Ashot\Desktop\prof_shashki\qayl1.wav");
        }else if(qanak > 1){
            QMessageBox::warning(this,tr("STOP"),tr("չես կարա16!"));
            sxmaci_type = hakarak_type;
        }else{
            Dashter[x1][y1] = false;
            Dashter[x2][y2] = true;
            qarer[p1].set_type(Kerac);
            Dashter[qarer[p1].get_x()][qarer[p1].get_y()] = false;
            qarer[p1].set_x(750 + rand() % 100);
            qarer[p1].set_y(rand() % 600);
            qarer[a].set_x(x2);
            qarer[a].set_y(y2);
            ptiutes = false;
            m_ptixaxas = false;
            if(Damkaov_utel(qarer[a])){
                ptiutes = true;
                m_ptixaxas = true;
                ptixaxas = qarer[a];
                sxmaci_type = hakarak_type;
            }
            //QSound::play("C:\\Users\\ashot\\Documents\\Projects\\My projects\\shashki\\qayl1.wav");
         }
      }
    }else if(x1 - x2 == y2 - y1 && x1 - x2 < 0){
        qDebug() << "4";
        qanak = 0;
        for(int i = x1 + 1,j = y1 - 1;i != x2 && j != y2;i++,j--){
            qDebug() << "44";
            for(int p = 0;p < 24;p++){
               if(qarer[p].get_x() == i && qarer[p].get_y() == j && qarer[p].get_type() != hakarak_type){
                   QMessageBox::warning(this,tr("STOP"),tr("չես կարա14!"));
                   sxmaci_type = hakarak_type;
                   break;
               }else if(qarer[p].get_x() == i && qarer[p].get_y() == j && qarer[p].get_type() == hakarak_type){
                   qanak++;
                   p1 = p;
            }
        }
        if(qanak == 0){
                qarer[a].set_x(x2);
                qarer[a].set_y(y2);
                Dashter[x1][y1] = false;
                Dashter[x2][y2] = true;
                Stugum(hakarak_type);
                //QSound::play("C:\Users\Ashot\Desktop\prof_shashki\qayl1.wav");
        }else if(qanak > 1){
            QMessageBox::warning(this,tr("STOP"),tr("չես կարա16!"));
            sxmaci_type = hakarak_type;
        }else{
            Dashter[x1][y1] = false;
            Dashter[x2][y2] = true;
            qarer[p1].set_type(Kerac);
            Dashter[qarer[p1].get_x()][qarer[p1].get_y()] = false;
            qarer[p1].set_x(750 + rand() % 100);
            qarer[p1].set_y(rand() % 600);
            qarer[a].set_x(x2);
            qarer[a].set_y(y2);
            ptiutes = false;
            m_ptixaxas = false;
            if(Damkaov_utel(qarer[a])){
                ptiutes = true;
                m_ptixaxas = true;
                ptixaxas = qarer[a];
                sxmaci_type = hakarak_type;
            }
            //QSound::play("C:\\Users\\ashot\\Documents\\Projects\\My projects\\shashki\\qayl1.wav");
         }
      }
    }
}
bool Widget::Damkaov_utel(coins temp){
    if(temp.get_damka() == false)return false;
    for(int c = temp.get_x() - 1,b = temp.get_y() - 1;c - 1 > 2 && b - 1 > 2;c--,b--){
        if(Dashter[c - 1][b - 1] == true){
            break;
        }
        for(int i = 0;i < 24;i++){
            if(qarer[i].get_x() == c && qarer[i].get_y() == b && Dashter[c - 1][b - 1] == false && qarer[i].get_type() != temp.get_type()){
                return true;
            }
        }
    }
    for(int c = temp.get_x() + 1,b = temp.get_y() - 1;c + 1 < 9 && b - 1 > 2;c++,b--){
        if(Dashter[c + 1][b - 1] == true){
            break;
        }
        for(int i = 0;i < 24;i++){
            if(qarer[i].get_x() == c && qarer[i].get_y() == b && Dashter[c + 1][b - 1] == false && qarer[i].get_type() != temp.get_type()){
                return true;
            }
        }
    }
    for(int c = temp.get_x() - 1,b = temp.get_y() + 1;c - 1 > 2 && b + 1 < 9;c--,b++){
        if(Dashter[c - 1][b + 1] == true){
            break;
        }
        for(int i = 0;i < 24;i++){
            if(qarer[i].get_x() == c && qarer[i].get_y() == b && Dashter[c - 1][b + 1] == false && qarer[i].get_type() != temp.get_type()){
                return true;
            }
        }
    }
    for(int c = temp.get_x() + 1,b = temp.get_y() + 1;c + 1 < 9 && b + 1 < 9;c++,b++){
        if(Dashter[c + 1][b + 1] == true){
            break;
        }
        for(int i = 0;i < 24;i++){
            if(qarer[i].get_x() == c && qarer[i].get_y() == b && Dashter[c + 1][b + 1] == false && qarer[i].get_type() != temp.get_type()){
                return true;
            }
        }
    }
return false;

}
void Widget::mouseMoveEvent(QMouseEvent *event){
    if(event->button() == Qt::RightButton){
        return;
    }
    if(a != -1){
        qarer[a].set_m_shexum_x(event->x() - qarer[a].get_x() * 50 -25);
        qarer[a].set_m_shexum_y(event->y() - qarer[a].get_y() * 50 -25);
    }
    repaint();
}
void Widget::ChangeYellow(){
    playercolor = true;
    sxmaci_type = Black;
    pCheckableAction2->setChecked(false);
    FNewGame();
}
void Widget::ChangeBlack(){
    playercolor = false;
    sxmaci_type = Yellow;
    pCheckableAction->setChecked(false);
    FNewGame();
}
void Widget::setboard1(){
    chooseboard2->setChecked(false);
    board = new QPixmap(":/board.jpg");
    repaint();
}
void Widget::setboard2(){
    chooseboard1->setChecked(false);
    board = new QPixmap(":/board2.jpg");
    repaint();
}
