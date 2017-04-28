#include "coins.h"

coins::coins()
{

}
void coins::setall(int x,int y,bool damka,QPixmap* nkar,QString type){
    m_x = x;
    m_y = y;
    m_damka = damka;
    m_nkar = nkar;
    m_type = type;
}
int coins::get_x() const{
    return m_x;
}
int coins::get_y() const{
    return m_y;
}
bool coins::get_damka() const{
    return m_damka;
}
QPixmap* coins::get_nkar() const{
    return m_nkar;
}
QString coins::get_type() const{
    return m_type;
}
int coins::get_shexum_x()const{
    return m_shexum_x;
}
int coins::get_shexum_y()const{
    return m_shexum_y;
}
void coins::set_x(int x){
    m_x = x;
}
void coins::set_y(int y){
    m_y = y;
}
void coins::set_damka(bool damka){
    m_damka = damka;
}
void coins::set_nkar(QPixmap* nkar){
    m_nkar = nkar;
}
void coins::set_type(QString type){
       m_type = type;
}
void coins::set_m_shexum_x(int a){
    m_shexum_x = a;
}
void coins::set_m_shexum_y(int a){
    m_shexum_y = a;
}

bool operator !=(const coins& first,const coins& second){
    if(first.get_damka() == second.get_damka() &&
        first.get_nkar() == second.get_nkar() &&
        first.get_type() == second.get_type() &&
        first.get_x() == second.get_x() &&
        first.get_y() == second.get_y())return false;
    return true;
}

