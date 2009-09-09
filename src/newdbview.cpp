#include "newdbview.h"
#include "ui_newdbview.h"
#include <QFileDialog>
#include "globalcontext.h"

newdbview::newdbview(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::newdbview)
{
    m_ui->setupUi(this);
}

newdbview::~newdbview()
{
    delete m_ui;
}

void newdbview::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void newdbview::on_labelCreateNewDb_linkActivated(QString link)
{
    QFileDialog dialog(this, tr("Enter new db name"), "", tr("Data files (*.db) | *.db"));
    dialog.setFileMode(QFileDialog::AnyFile);
    if (dialog.exec())
    {
        QStringList files = dialog.selectedFiles();
        GlobalContext::Instance().setCurrentDb(files.value(0));
    }
    this->close();
}
