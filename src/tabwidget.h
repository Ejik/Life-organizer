#ifndef TABWIDGET_H
#define TABWIDGET_H

#include <QtGui/QTabWidget>

namespace Ui {
    class TabWidget;
}

class TabWidget : public QTabWidget {
    Q_OBJECT
public:
    TabWidget(QWidget *parent = 0);
    ~TabWidget();


protected:
    void changeEvent(QEvent *e);

private:
    Ui::TabWidget *m_ui;
};

#endif // TABWIDGET_H
