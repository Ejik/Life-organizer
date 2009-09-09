#include "tabwidget.h"
#include "ui_tabwidget.h"

TabWidget::TabWidget(QWidget *parent) :
    QTabWidget(parent),
    m_ui(new Ui::TabWidget)
{
    m_ui->setupUi(this);

    connect(&GlobalContext::Instance(), SIGNAL(currentDbChanged(QString)), this, SLOT(readData()));
}

TabWidget::~TabWidget()
{
    delete m_ui;
}

void TabWidget::changeEvent(QEvent *e)
{
    QTabWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void TabWidget::readData()
{

}
