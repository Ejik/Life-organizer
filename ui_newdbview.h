/********************************************************************************
** Form generated from reading ui file 'newdbview.ui'
**
** Created: Wed 28. Oct 09:23:18 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_NEWDBVIEW_H
#define UI_NEWDBVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_newdbview
{
public:
    QLabel *label;
    QLabel *label_3;
    QFrame *line_2;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QLabel *labelCreateNewDb;
    QLabel *label_7;
    QGraphicsView *graphicsView;
    QLabel *label_6;
    QFrame *line;
    QLabel *label_5;

    void setupUi(QDialog *newdbview)
    {
        if (newdbview->objectName().isEmpty())
            newdbview->setObjectName(QString::fromUtf8("newdbview"));
        newdbview->setWindowModality(Qt::WindowModal);
        newdbview->resize(400, 300);
        newdbview->setModal(true);
        label = new QLabel(newdbview);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 0, 321, 61));
        label->setWordWrap(true);
        label_3 = new QLabel(newdbview);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 140, 101, 16));
        line_2 = new QFrame(newdbview);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(90, 140, 301, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        buttonBox = new QDialogButtonBox(newdbview);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);
        label_2 = new QLabel(newdbview);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 101, 16));
        labelCreateNewDb = new QLabel(newdbview);
        labelCreateNewDb->setObjectName(QString::fromUtf8("labelCreateNewDb"));
        labelCreateNewDb->setGeometry(QRect(20, 100, 151, 16));
        label_7 = new QLabel(newdbview);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 220, 371, 16));
        graphicsView = new QGraphicsView(newdbview);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 41, 41));
        label_6 = new QLabel(newdbview);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 180, 371, 16));
        line = new QFrame(newdbview);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(120, 80, 271, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(newdbview);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 160, 371, 16));

        retranslateUi(newdbview);
        QObject::connect(buttonBox, SIGNAL(rejected()), newdbview, SLOT(reject()));

        QMetaObject::connectSlotsByName(newdbview);
    } // setupUi

    void retranslateUi(QDialog *newdbview)
    {
        newdbview->setWindowTitle(QApplication::translate("newdbview", "Create new DB", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("newdbview", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Life organizer - is small organizer for task management. <span style=\" font-family:'Tahoma'; color:#333333;\">You can select an existing template or create your own. Make your choice.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("newdbview", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Templates</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("newdbview", "<b>New blank DB</b>", 0, QApplication::UnicodeUTF8));
        labelCreateNewDb->setText(QApplication::translate("newdbview", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"CreateNewDB\"><span style=\" text-decoration: underline; color:#0000ee;\">Create new blank DB</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("newdbview", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"More\"><span style=\" text-decoration: underline; color:#0000ee;\">More...</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("newdbview", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"TrConvey\"><span style=\" text-decoration: underline; color:#0000ee;\">Traditional Franklin Convey</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("newdbview", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"Demo\"><span style=\" text-decoration: underline; color:#0000ee;\">Life organizer demo</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(newdbview);
    } // retranslateUi

};

namespace Ui {
    class newdbview: public Ui_newdbview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDBVIEW_H
