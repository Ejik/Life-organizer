#ifndef NEWDBVIEW_H
#define NEWDBVIEW_H

#include <QtGui/QDialog>

namespace Ui {
    class newdbview;
}

class newdbview : public QDialog {
    Q_OBJECT
public:
    newdbview(QWidget *parent = 0);
    ~newdbview();

protected:
    void changeEvent(QEvent *e);

private slots:

private:
    Ui::newdbview *m_ui;

private slots:
    void on_labelCreateNewDb_linkActivated(QString link);
};

#endif // NEWDBVIEW_H
