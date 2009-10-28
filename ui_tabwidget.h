/********************************************************************************
** Form generated from reading ui file 'tabwidget.ui'
**
** Created: Wed 28. Oct 09:23:18 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TABWIDGET_H
#define UI_TABWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBox>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabWidget
{
public:
    QWidget *tabScheme;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QComboBox *comboBox;
    QTreeView *treeView;
    QWidget *tabTodo;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QToolBox *toolBox;
    QWidget *pageContexts;
    QWidget *page_2;
    QComboBox *comboBox_2;
    QTreeView *treeView_2;

    void setupUi(QTabWidget *TabWidget)
    {
        if (TabWidget->objectName().isEmpty())
            TabWidget->setObjectName(QString::fromUtf8("TabWidget"));
        TabWidget->resize(324, 583);
        tabScheme = new QWidget();
        tabScheme->setObjectName(QString::fromUtf8("tabScheme"));
        gridLayout_2 = new QGridLayout(tabScheme);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBox = new QCheckBox(tabScheme);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setTristate(true);

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        comboBox = new QComboBox(tabScheme);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFrame(true);
        comboBox->setModelColumn(0);

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        treeView = new QTreeView(tabScheme);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 1, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        TabWidget->addTab(tabScheme, QString());
        tabTodo = new QWidget();
        tabTodo->setObjectName(QString::fromUtf8("tabTodo"));
        gridLayout_4 = new QGridLayout(tabTodo);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        toolBox = new QToolBox(tabTodo);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setFrameShape(QFrame::NoFrame);
        pageContexts = new QWidget();
        pageContexts->setObjectName(QString::fromUtf8("pageContexts"));
        pageContexts->setGeometry(QRect(0, 0, 57, 480));
        toolBox->addItem(pageContexts, QString::fromUtf8("Contexts"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 57, 480));
        toolBox->addItem(page_2, QString::fromUtf8("Page 2"));

        gridLayout_3->addWidget(toolBox, 0, 0, 2, 1);

        comboBox_2 = new QComboBox(tabTodo);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_3->addWidget(comboBox_2, 0, 1, 1, 1);

        treeView_2 = new QTreeView(tabTodo);
        treeView_2->setObjectName(QString::fromUtf8("treeView_2"));

        gridLayout_3->addWidget(treeView_2, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        TabWidget->addTab(tabTodo, QString());

        retranslateUi(TabWidget);

        TabWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TabWidget);
    } // setupUi

    void retranslateUi(QTabWidget *TabWidget)
    {
        TabWidget->setWindowTitle(QString());
        checkBox->setText(QApplication::translate("TabWidget", "Hide complited tasks", 0, QApplication::UnicodeUTF8));
        TabWidget->setTabText(TabWidget->indexOf(tabScheme), QApplication::translate("TabWidget", "Scheme", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        tabTodo->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        toolBox->setItemText(toolBox->indexOf(pageContexts), QApplication::translate("TabWidget", "Contexts", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("TabWidget", "Page 2", 0, QApplication::UnicodeUTF8));
        TabWidget->setTabText(TabWidget->indexOf(tabTodo), QApplication::translate("TabWidget", "ToDo", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(TabWidget);
    } // retranslateUi

};

namespace Ui {
    class TabWidget: public Ui_TabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABWIDGET_H
