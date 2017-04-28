#include "widget.h"
#include <QApplication>
#include<QMenuBar>
#include<QMenu>
#include<QAction>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    QMenuBar m_menubar(&w);

        QMenu* m_file = new QMenu("&File");
        m_file->addAction("&New game",&w,SLOT(FNewGame()),Qt::Key_F2);
        m_file->addSeparator();
        m_file->addAction("&Exit", &a, SLOT(quit()),Qt::ALT + Qt::Key_F4);
        //m_file->setTearOffEnabled(true);
        QMenu* m_tools = new QMenu("&Tools");
        QMenu* play_in = new QMenu("&Play in", m_tools);
        m_tools->addMenu(play_in);
        w.pCheckableAction = play_in->addAction("&Yellow", &w,SLOT(ChangeYellow()),Qt::CTRL + Qt::Key_Y);
        w.pCheckableAction->setCheckable(true);
        w.pCheckableAction->setChecked(true);
        play_in->addSeparator();
        w.pCheckableAction2 = play_in->addAction("&Purple", &w,SLOT(ChangeBlack()),Qt::CTRL + Qt::Key_P);
        w.pCheckableAction2->setCheckable(true);
        w.pCheckableAction2->setChecked(false);
        m_tools->addSeparator();
        QMenu* m_board = new QMenu("&Board",m_tools);
        m_tools->addMenu(m_board);
        w.chooseboard1 = m_board->addAction("&Board - 1",&w,SLOT(setboard1()));
        w.chooseboard1->setCheckable(true);
        w.chooseboard1->setChecked(true);
        m_board->addSeparator();
        w.chooseboard2 = m_board->addAction("&Board - 2",&w,SLOT(setboard2()));
        w.chooseboard2->setCheckable(true);
        w.chooseboard2->setChecked(false);


        QMenu* m_help = new QMenu("&Help");
        m_help->addAction("&About Qt", &a,SLOT(aboutQt()),Qt::CTRL + Qt::Key_Q);
        m_help->addSeparator();
        m_help->addAction("&How to play",&w,SLOT(slotfunc()));

        m_menubar.addMenu(m_file);
        m_menubar.addMenu(m_tools);
        m_menubar.addMenu(m_help);

        m_menubar.adjustSize();

        //QAction* pDisabledAction = m_help->addAction("&DisabledItem");
        //pDisabledAction->setEnabled(false);





    w.show();

    return a.exec();
}
