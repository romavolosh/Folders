/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *pathLabel;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *recentBtn;
    QPushButton *starredBtn;
    QPushButton *homeBtn;
    QPushButton *desktopBtn;
    QPushButton *documentsBtn;
    QPushButton *downloadsBtn;
    QPushButton *musicBtn;
    QPushButton *picturesBtn;
    QPushButton *videosBtn;
    QPushButton *trashBtn;
    QSpacerItem *verticalSpacer;
    QSplitter *splitter;
    QSplitter *splitter_2;
    QListWidget *listWidget;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pathLabel = new QLabel(centralwidget);
        pathLabel->setObjectName("pathLabel");

        verticalLayout_2->addWidget(pathLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        recentBtn = new QPushButton(centralwidget);
        recentBtn->setObjectName("recentBtn");

        verticalLayout->addWidget(recentBtn);

        starredBtn = new QPushButton(centralwidget);
        starredBtn->setObjectName("starredBtn");

        verticalLayout->addWidget(starredBtn);

        homeBtn = new QPushButton(centralwidget);
        homeBtn->setObjectName("homeBtn");

        verticalLayout->addWidget(homeBtn);

        desktopBtn = new QPushButton(centralwidget);
        desktopBtn->setObjectName("desktopBtn");

        verticalLayout->addWidget(desktopBtn);

        documentsBtn = new QPushButton(centralwidget);
        documentsBtn->setObjectName("documentsBtn");

        verticalLayout->addWidget(documentsBtn);

        downloadsBtn = new QPushButton(centralwidget);
        downloadsBtn->setObjectName("downloadsBtn");

        verticalLayout->addWidget(downloadsBtn);

        musicBtn = new QPushButton(centralwidget);
        musicBtn->setObjectName("musicBtn");

        verticalLayout->addWidget(musicBtn);

        picturesBtn = new QPushButton(centralwidget);
        picturesBtn->setObjectName("picturesBtn");

        verticalLayout->addWidget(picturesBtn);

        videosBtn = new QPushButton(centralwidget);
        videosBtn->setObjectName("videosBtn");

        verticalLayout->addWidget(videosBtn);

        trashBtn = new QPushButton(centralwidget);
        trashBtn->setObjectName("trashBtn");

        verticalLayout->addWidget(trashBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        splitter_2 = new QSplitter(splitter);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Orientation::Horizontal);
        listWidget = new QListWidget(splitter_2);
        listWidget->setObjectName("listWidget");
        splitter_2->addWidget(listWidget);
        plainTextEdit = new QPlainTextEdit(splitter_2);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setReadOnly(true);
        splitter_2->addWidget(plainTextEdit);
        splitter->addWidget(splitter_2);

        horizontalLayout->addWidget(splitter);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pathLabel->setText(QString());
        recentBtn->setText(QCoreApplication::translate("MainWindow", "Recent", nullptr));
        starredBtn->setText(QCoreApplication::translate("MainWindow", "Starred", nullptr));
        homeBtn->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        desktopBtn->setText(QCoreApplication::translate("MainWindow", "Desktop", nullptr));
        documentsBtn->setText(QCoreApplication::translate("MainWindow", "Documents", nullptr));
        downloadsBtn->setText(QCoreApplication::translate("MainWindow", "Downloads", nullptr));
        musicBtn->setText(QCoreApplication::translate("MainWindow", "Music", nullptr));
        picturesBtn->setText(QCoreApplication::translate("MainWindow", "Pictures", nullptr));
        videosBtn->setText(QCoreApplication::translate("MainWindow", "Videos", nullptr));
        trashBtn->setText(QCoreApplication::translate("MainWindow", "Trash", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
