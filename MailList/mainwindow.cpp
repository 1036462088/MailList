#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "person.h"
#include <QDialog>
#include "show_person.h"
#include <QFileInfo>
#include <QFile>
#include <QFileDialog>
#include <QTextCodec>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("通讯录管理系统");

    DateTime();
    //退出按钮实现
    connect(ui->pushButton_close,&QPushButton::clicked,[=](){
        QMessageBox::information(this,"退出","欢迎下次使用");
        this->close();
    });
    //添加联系人实现
    connect(ui->pushButton_lianxiren,&QPushButton::clicked,[=](){
        Person *p=new Person;
        p->setFixedSize(500,600);
        p->show();
    });
    //显示联系人实现
    connect(ui->pushButton_show,&QPushButton::clicked,[=](){
        Show_Person *sp=new Show_Person;
        sp->resize(600,600);
        sp->show();
    });
    //清空联系人实现
    connect(ui->pushButton_free,&QPushButton::clicked,[=](){
        freeFile();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::DateTime()
{
    //创建label对象显示时间和日期
    label=new QLabel(this);
    label->resize(600,50);

    QVBoxLayout *layout=new QVBoxLayout(this);

    layout->addWidget(label);
    this->setLayout(layout);
    //初始化时间和日期的显示
    dateTime=QDateTime::currentDateTime();
    this->label->setText(dateTime.toString("yyyy/MM/dd hh:mm:ss ddd").toUtf8().data());
    //创建定时器更新时间和日期
    time = new QTimer(this);
    connect(time,&QTimer::timeout,[=](){
        timeUpdate();
    });
    time->start(1000);
}
void MainWindow::timeUpdate()
{
    dateTime=QDateTime::currentDateTime();
    this->label->setText(dateTime.toString("yyyy/MM/dd hh:mm:ss ddd").toUtf8().data());

}

void MainWindow::freeFile()
{
    bool FreeFile("./res/数据.txt");
    QFileInfo FileInfo("./res/数据.txt");
    if(FileInfo.isFile()&&FreeFile)//判断是否为文件 及文件是否存在
    {
        QFile::remove("./res/数据.txt");
        QMessageBox::information(this,"提示","联系人已清空");
        return;
    }
    else
    {
        QMessageBox::warning(this,"警告","联系人已清空无需再次操作");
        return;
    }
}

