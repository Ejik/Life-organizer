/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Wed 28. Oct 09:23:18 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QToolBox>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New;
    QAction *action_Open;
    QAction *action_Save;
    QAction *actionSave_As;
    QAction *actionClose;
    QAction *actionImport;
    QAction *actionExport;
    QAction *actionBackup;
    QAction *actionSync;
    QAction *action_Print;
    QAction *actionE_xit;
    QAction *actionIndex;
    QAction *actionAbout_Life_Organizer;
    QAction *actionNew_task;
    QAction *actionNew_subtask;
    QAction *actionDelete_task;
    QAction *actionComplite_task_and_all_subtasks;
    QAction *actionFind;
    QAction *actionDate_Time;
    QAction *actionInsert_Date_Time;
    QAction *actionInsert_Date;
    QAction *actionInsert_Time;
    QAction *actionHide_complited_tasks;
    QAction *action123;
    QWidget *centralWidget;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *tabShceme;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QComboBox *comboBox;
    QTreeView *treeView;
    QWidget *tabTodo;
    QGridLayout *gridLayout_3;
    QToolBox *toolBox;
    QWidget *pageContexts;
    QWidget *page_2;
    QComboBox *comboBox_2;
    QTreeView *treeView_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QToolButton *toolButton_10;
    QToolButton *toolButton_11;
    QLineEdit *lineEdit;
    QTabWidget *tabWidget_2;
    QWidget *tabNotes;
    QWidget *tabPropperties;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menuOpen_recent;
    QMenu *menu_Edit;
    QMenu *menuInsert;
    QMenu *menu_View;
    QMenu *menu_Task;
    QMenu *menuMore;
    QMenu *menu_Service;
    QMenu *menu_Help;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(787, 579);
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        MainWindow->setWindowTitle(QString::fromUtf8("Life organizer"));
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QString::fromUtf8("action_New"));
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionBackup = new QAction(MainWindow);
        actionBackup->setObjectName(QString::fromUtf8("actionBackup"));
        actionSync = new QAction(MainWindow);
        actionSync->setObjectName(QString::fromUtf8("actionSync"));
        action_Print = new QAction(MainWindow);
        action_Print->setObjectName(QString::fromUtf8("action_Print"));
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        actionIndex = new QAction(MainWindow);
        actionIndex->setObjectName(QString::fromUtf8("actionIndex"));
        actionAbout_Life_Organizer = new QAction(MainWindow);
        actionAbout_Life_Organizer->setObjectName(QString::fromUtf8("actionAbout_Life_Organizer"));
        actionNew_task = new QAction(MainWindow);
        actionNew_task->setObjectName(QString::fromUtf8("actionNew_task"));
        actionNew_subtask = new QAction(MainWindow);
        actionNew_subtask->setObjectName(QString::fromUtf8("actionNew_subtask"));
        actionDelete_task = new QAction(MainWindow);
        actionDelete_task->setObjectName(QString::fromUtf8("actionDelete_task"));
        actionComplite_task_and_all_subtasks = new QAction(MainWindow);
        actionComplite_task_and_all_subtasks->setObjectName(QString::fromUtf8("actionComplite_task_and_all_subtasks"));
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        actionDate_Time = new QAction(MainWindow);
        actionDate_Time->setObjectName(QString::fromUtf8("actionDate_Time"));
        actionInsert_Date_Time = new QAction(MainWindow);
        actionInsert_Date_Time->setObjectName(QString::fromUtf8("actionInsert_Date_Time"));
        actionInsert_Date = new QAction(MainWindow);
        actionInsert_Date->setObjectName(QString::fromUtf8("actionInsert_Date"));
        actionInsert_Time = new QAction(MainWindow);
        actionInsert_Time->setObjectName(QString::fromUtf8("actionInsert_Time"));
        actionHide_complited_tasks = new QAction(MainWindow);
        actionHide_complited_tasks->setObjectName(QString::fromUtf8("actionHide_complited_tasks"));
        actionHide_complited_tasks->setCheckable(true);
        actionHide_complited_tasks->setChecked(false);
        action123 = new QAction(MainWindow);
        action123->setObjectName(QString::fromUtf8("action123"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(0, 0, 771, 471));
        splitter->setOrientation(Qt::Horizontal);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setAutoFillBackground(false);
        tabShceme = new QWidget();
        tabShceme->setObjectName(QString::fromUtf8("tabShceme"));
        gridLayout = new QGridLayout(tabShceme);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBox = new QCheckBox(tabShceme);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setTristate(true);

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        comboBox = new QComboBox(tabShceme);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFrame(true);
        comboBox->setModelColumn(0);

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        treeView = new QTreeView(tabShceme);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 1, 0, 1, 2);

        tabWidget->addTab(tabShceme, QString());
        tabTodo = new QWidget();
        tabTodo->setObjectName(QString::fromUtf8("tabTodo"));
        gridLayout_3 = new QGridLayout(tabTodo);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        toolBox = new QToolBox(tabTodo);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setFrameShape(QFrame::NoFrame);
        pageContexts = new QWidget();
        pageContexts->setObjectName(QString::fromUtf8("pageContexts"));
        pageContexts->setGeometry(QRect(0, 0, 116, 352));
        toolBox->addItem(pageContexts, QString::fromUtf8("Contexts"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 102, 390));
        toolBox->addItem(page_2, QString::fromUtf8("Page 2"));

        gridLayout_3->addWidget(toolBox, 0, 0, 2, 1);

        comboBox_2 = new QComboBox(tabTodo);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_3->addWidget(comboBox_2, 0, 1, 1, 1);

        treeView_2 = new QTreeView(tabTodo);
        treeView_2->setObjectName(QString::fromUtf8("treeView_2"));

        gridLayout_3->addWidget(treeView_2, 1, 1, 1, 1);

        tabWidget->addTab(tabTodo, QString());
        splitter->addWidget(tabWidget);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButton_10 = new QToolButton(layoutWidget);
        toolButton_10->setObjectName(QString::fromUtf8("toolButton_10"));

        gridLayout_2->addWidget(toolButton_10, 0, 0, 1, 1);

        toolButton_11 = new QToolButton(layoutWidget);
        toolButton_11->setObjectName(QString::fromUtf8("toolButton_11"));

        gridLayout_2->addWidget(toolButton_11, 0, 1, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 2, 1, 1);

        tabWidget_2 = new QTabWidget(layoutWidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabNotes = new QWidget();
        tabNotes->setObjectName(QString::fromUtf8("tabNotes"));
        tabWidget_2->addTab(tabNotes, QString());
        tabPropperties = new QWidget();
        tabPropperties->setObjectName(QString::fromUtf8("tabPropperties"));
        tabWidget_2->addTab(tabPropperties, QString());

        gridLayout_2->addWidget(tabWidget_2, 1, 0, 1, 3);

        splitter->addWidget(layoutWidget);
        MainWindow->setCentralWidget(centralWidget);
        splitter->raise();
        tabWidget_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 787, 21));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuOpen_recent = new QMenu(menu_File);
        menuOpen_recent->setObjectName(QString::fromUtf8("menuOpen_recent"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menuInsert = new QMenu(menu_Edit);
        menuInsert->setObjectName(QString::fromUtf8("menuInsert"));
        menu_View = new QMenu(menuBar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menu_Task = new QMenu(menuBar);
        menu_Task->setObjectName(QString::fromUtf8("menu_Task"));
        menuMore = new QMenu(menu_Task);
        menuMore->setObjectName(QString::fromUtf8("menuMore"));
        menu_Service = new QMenu(menuBar);
        menu_Service->setObjectName(QString::fromUtf8("menu_Service"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menuBar->addAction(menu_View->menuAction());
        menuBar->addAction(menu_Task->menuAction());
        menuBar->addAction(menu_Service->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_New);
        menu_File->addAction(action_Open);
        menu_File->addSeparator();
        menu_File->addAction(menuOpen_recent->menuAction());
        menu_File->addAction(action_Save);
        menu_File->addAction(actionSave_As);
        menu_File->addAction(actionClose);
        menu_File->addSeparator();
        menu_File->addAction(actionImport);
        menu_File->addAction(actionExport);
        menu_File->addAction(actionBackup);
        menu_File->addSeparator();
        menu_File->addAction(actionSync);
        menu_File->addSeparator();
        menu_File->addAction(action_Print);
        menu_File->addSeparator();
        menu_File->addAction(actionE_xit);
        menuOpen_recent->addAction(action123);
        menu_Edit->addAction(actionFind);
        menu_Edit->addSeparator();
        menu_Edit->addAction(menuInsert->menuAction());
        menuInsert->addAction(actionInsert_Date_Time);
        menuInsert->addAction(actionInsert_Date);
        menuInsert->addAction(actionInsert_Time);
        menu_View->addAction(actionHide_complited_tasks);
        menu_Task->addAction(actionNew_task);
        menu_Task->addAction(actionNew_subtask);
        menu_Task->addSeparator();
        menu_Task->addAction(menuMore->menuAction());
        menu_Task->addSeparator();
        menu_Task->addAction(actionDelete_task);
        menuMore->addAction(actionComplite_task_and_all_subtasks);
        menu_Help->addAction(actionIndex);
        menu_Help->addSeparator();
        menu_Help->addAction(actionAbout_Life_Organizer);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        action_New->setText(QApplication::translate("MainWindow", "&New...", 0, QApplication::UnicodeUTF8));
        action_Open->setText(QApplication::translate("MainWindow", "&Open...", 0, QApplication::UnicodeUTF8));
        action_Open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        action_Save->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As...", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0, QApplication::UnicodeUTF8));
        actionImport->setText(QApplication::translate("MainWindow", "Import...", 0, QApplication::UnicodeUTF8));
        actionExport->setText(QApplication::translate("MainWindow", "Export...", 0, QApplication::UnicodeUTF8));
        actionBackup->setText(QApplication::translate("MainWindow", "Backup...", 0, QApplication::UnicodeUTF8));
        actionSync->setText(QApplication::translate("MainWindow", "Sync...", 0, QApplication::UnicodeUTF8));
        action_Print->setText(QApplication::translate("MainWindow", "&Print...", 0, QApplication::UnicodeUTF8));
        action_Print->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionE_xit->setText(QApplication::translate("MainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
        actionIndex->setText(QApplication::translate("MainWindow", "Index", 0, QApplication::UnicodeUTF8));
        actionAbout_Life_Organizer->setText(QApplication::translate("MainWindow", "About Life Organizer...", 0, QApplication::UnicodeUTF8));
        actionNew_task->setText(QApplication::translate("MainWindow", "New task", 0, QApplication::UnicodeUTF8));
        actionNew_subtask->setText(QApplication::translate("MainWindow", "New subtask", 0, QApplication::UnicodeUTF8));
        actionDelete_task->setText(QApplication::translate("MainWindow", "Delete task", 0, QApplication::UnicodeUTF8));
        actionComplite_task_and_all_subtasks->setText(QApplication::translate("MainWindow", "Complite task and all subtasks", 0, QApplication::UnicodeUTF8));
        actionFind->setText(QApplication::translate("MainWindow", "Find", 0, QApplication::UnicodeUTF8));
        actionDate_Time->setText(QApplication::translate("MainWindow", "Date / Time", 0, QApplication::UnicodeUTF8));
        actionInsert_Date_Time->setText(QApplication::translate("MainWindow", "Insert Date/Time", 0, QApplication::UnicodeUTF8));
        actionInsert_Date->setText(QApplication::translate("MainWindow", "Insert Date", 0, QApplication::UnicodeUTF8));
        actionInsert_Time->setText(QApplication::translate("MainWindow", "Insert Time", 0, QApplication::UnicodeUTF8));
        actionHide_complited_tasks->setText(QApplication::translate("MainWindow", "Hide complited tasks", 0, QApplication::UnicodeUTF8));
        action123->setText(QApplication::translate("MainWindow", "123", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "Hide complited tasks", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabShceme), QApplication::translate("MainWindow", "Scheme", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(pageContexts), QApplication::translate("MainWindow", "Contexts", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "Page 2", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabTodo), QApplication::translate("MainWindow", "Todo", 0, QApplication::UnicodeUTF8));
        toolButton_10->setText(QString());
        toolButton_11->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tabNotes), QApplication::translate("MainWindow", "Notes", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tabPropperties), QApplication::translate("MainWindow", "Propperties", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuOpen_recent->setTitle(QApplication::translate("MainWindow", "Open recent", 0, QApplication::UnicodeUTF8));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menuInsert->setTitle(QApplication::translate("MainWindow", "Insert", 0, QApplication::UnicodeUTF8));
        menu_View->setTitle(QApplication::translate("MainWindow", "&View", 0, QApplication::UnicodeUTF8));
        menu_Task->setTitle(QApplication::translate("MainWindow", "&Task", 0, QApplication::UnicodeUTF8));
        menuMore->setTitle(QApplication::translate("MainWindow", "More", 0, QApplication::UnicodeUTF8));
        menu_Service->setTitle(QApplication::translate("MainWindow", "&Service", 0, QApplication::UnicodeUTF8));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
