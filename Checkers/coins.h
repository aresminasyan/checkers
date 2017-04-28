#ifndef COINS_H
#define COINS_H

#include <QWidget>
#include <QPainter>
#include <QAction>
class coins
{
public:
    coins();
    void setall(int, int, bool, QPixmap*, QString);
    int get_x() const;
    int get_y() const;
    bool get_damka() const;
    QPixmap *get_nkar() const;
    QString get_type() const;
    int get_shexum_x()const;
    int get_shexum_y()const;
    void set_x(int);
    void set_y(int);
    void set_damka(bool);
    void set_nkar(QPixmap *);
    void set_type(QString);
    void set_m_shexum_x(int);
    void set_m_shexum_y(int);
    friend bool operator !=(const coins& first,const coins& second);

private:
    int m_shexum_x;
    int m_shexum_y;
    int m_x;
    int m_y;
    bool m_damka;
    QPixmap* m_nkar;
    QString m_type;

};


#endif // COINS_H
