#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QIcon>
#include <QFileInfo>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QListWidgetItem>
#include <QMessageBox>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->listWidget, &QListWidget::itemClicked, this, &MainWindow::on_listWidget_itemClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_downloadsBtn_clicked()
{
    ui -> listWidget -> clear();
    ui -> pathLabel -> setText("/home/romavolosh/Downloads");
    QDir dir("/home/romavolosh/Downloads");
    foreach (QFileInfo var, dir.entryInfoList()) {
        if(var.isDir())
            ui -> listWidget -> addItem(var.absoluteFilePath());
        if(var.isFile())
            ui -> listWidget -> addItem(var.absoluteFilePath());
    }
}


void MainWindow::on_documentsBtn_clicked()
{
    ui -> pathLabel -> setText("/home/romavolosh/Documents");
    ui -> listWidget -> clear();
    QDir dir("/home/romavolosh/Documents");
    foreach (QFileInfo var, dir.entryInfoList()) {
        if(var.isDir())
            ui -> listWidget -> addItem(var.absoluteFilePath());
        if(var.isFile())
            ui -> listWidget -> addItem(var.absoluteFilePath());
    }
}


void MainWindow::on_musicBtn_clicked()
{
    ui -> pathLabel -> setText("/home/romavolosh/Music");
    ui -> listWidget -> clear();
    QDir dir("/home/romavolosh/Music");
    foreach (QFileInfo var, dir.entryInfoList()) {
        if(var.isDir())
            ui -> listWidget -> addItem(var.absoluteFilePath());
        if(var.isFile())
            ui -> listWidget -> addItem(var.absoluteFilePath());
    }
}


void MainWindow::on_picturesBtn_clicked()
{
    ui -> pathLabel -> setText("/home/romavolosh/Pictures");
    ui -> listWidget -> clear();
    QDir dir("/home/romavolosh/Pictures");
    foreach (QFileInfo var, dir.entryInfoList()) {
        if(var.isDir())
            ui -> listWidget -> addItem(var.absoluteFilePath());
        if(var.isFile())
            ui -> listWidget -> addItem(var.absoluteFilePath());
    }
}


void MainWindow::on_videosBtn_clicked()
{
    ui -> pathLabel -> setText("/home/romavolosh/Videos");
    ui -> listWidget -> clear();
    QDir dir("/home/romavolosh/Videos");
    foreach (QFileInfo var, dir.entryInfoList()) {
        if(var.isDir())
            ui -> listWidget -> addItem(var.absoluteFilePath());
        if(var.isFile())
            ui -> listWidget -> addItem(var.absoluteFilePath());
    }
}


void MainWindow::on_desktopBtn_clicked()
{
    ui -> pathLabel -> setText("/home/romavolosh/Desktop");
    ui -> listWidget -> clear();
    QDir dir("/home/romavolosh/Desktop");
    foreach (QFileInfo var, dir.entryInfoList()) {
        if(var.isDir())
            ui -> listWidget -> addItem(var.absoluteFilePath());
        if(var.isFile())
            ui -> listWidget -> addItem(var.absoluteFilePath());
    }
}


void MainWindow::on_homeBtn_clicked()
{
    ui -> pathLabel -> setText("/home");
    ui -> listWidget -> clear();
    QDir dir("/home");
    foreach (QFileInfo var, dir.entryInfoList()) {
        if(var.isDir())
            ui -> listWidget -> addItem(var.absoluteFilePath());
        if(var.isFile())
            ui -> listWidget -> addItem(var.absoluteFilePath());
    }
}



void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString selectedText = item->text();
    QString filePath = selectedText;

    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error!", "Can't open the file: " + filePath);
        return;
    }

    QTextStream in (&file);
    QString text = in.readAll();
    ui -> plainTextEdit -> setPlainText(text);

    file.close();

}





