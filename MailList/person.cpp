#include "person.h"
#include "ui_person.h"
#include <QPushButton>
#include <QFile>
#include <QDir>
#include <QMessageBox>
#include <QTextCodec>
#include <QDebug>

Person::Person(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Person)
{
//   QTextCodec *codec = QTextCodec::setCodecForCStrings(QTextCodec::codecForName(“GB2312”));
//    QTextCodec::setCodecForLocale(codec);



    ui->setupUi(this);
    //this->resize(600,400);
    this->setWindowTitle("添加联系人");
    //取消按钮实现
    connect(ui->pushButton_quxiao,&QPushButton::clicked,[=](){
        this->close();
    });
    //确定按钮实现
    connect(ui->pushButton_queding,&QPushButton::clicked,[=](){
    SaveTxt();
    });



}

Person::~Person()
{
    delete ui;
}
//const char* Person::CHAR(QString str)//QString转char*
//{
//    std::string stdStr=str.toStdString();
//    const char* ch=stdStr.c_str();
//    return ch;
//}
void Person::SaveTxt()
{

    QString st_Name=ui->lineEdit_name->text();
    QString st_Age=ui->lineEdit_age->text();
    QString st_Phone=ui->lineEdit_phone->text();
    QString st_Addr=ui->lineEdit_addr->text();
//    const char* st_Sex_nan=CHAR(ui->radioButton_nan->text());
//    const char* st_Sex_nv=CHAR(ui->radioButton_nv->text());
    QString st_Sex_nan=QStringLiteral("男");
    QString st_Sex_nv=QStringLiteral("女");
    //保存为txt文件
    bool exist;
    QString fileName;
    QDir *folder=new QDir;
    exist=folder->exists("./res");//查看目录是否存在
    //不存在就创建
    if(!exist)
    {
        bool OK=folder->mkdir("./res");
        if(OK)
        {
            QMessageBox::warning(this,"创建目录","创建成功");//添加提示方便查看是否成功创建

        }
        else
        {
            QMessageBox::warning(this,"创建目录","创建失败");
        }
    }
    fileName=tr("./res/%1.txt").arg("数据");

    QFile f(fileName);


    if(!f.open(QIODevice::ReadWrite|QIODevice::Append|QIODevice::Text))
    {
        //追加写入 添加结束符 \r\n
        QMessageBox::warning(this,"错误","打开文件失败！保存数据失败！");
        return;
    }
    else
    {
        f.write(st_Name.toLocal8Bit());
        f.write("\n");
        f.write(st_Age.toLocal8Bit());
        f.write("\n");
        if(ui->radioButton_nan)
        {
            f.write(st_Sex_nan.toLocal8Bit());
            f.write("\n");
        }
        else
        {
            f.write(st_Sex_nv.toLocal8Bit());
            f.write("\n");
        }
        f.write(st_Phone.toLocal8Bit());
        f.write("\n");
        f.write(st_Addr.toLocal8Bit());
        f.write("\n");
        f.write("\n");
        QMessageBox::information(this,"添加成功","添加成功");
        this->close();
    }
    f.close();

}
//void Person::showfile()
//{
//    QString fileName;
//    QString displayString;
//    fileName =tr("./res/%1.txt").arg("数据");
//    QFile f(fileName);
//    if(!f.open(QIODevice::ReadOnly|QIODevice::Text))
//    {
//        QMessageBox::warning(this,"错误","读取失败");
//    }
//    while(!f.atEnd())
//    {

//        QByteArray line=f.readLine();
//        QString str(line);
//        qDebug()<<str;
//        displayString.append(str);
//    }
//    ui->lineEdit_name->setPlaceholderText(displayString);


//}
