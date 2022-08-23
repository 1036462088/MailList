#include "show_person.h"
#include <QTextStream>
#include "ui_show_person.h"
#include <QFileDialog>
#include <QFile>
#include <QByteArray>
#include <QTextCodec>
#include <QMessageBox>
#include <QFileInfo>
#include <QPushButton>
#include <QDialog>
#include <QVBoxLayout>





Show_Person::Show_Person(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Show_Person)
{
    QTextCodec *Codec=QTextCodec::codecForName("GBK");
    ui->setupUi(this);
    //判断文件是否存在
    // QString s=QString("./res/%1.txt").arg("数据");
    bool isFileExist("./res/数据.txt");
    QFileInfo FileInfo("./res/数据.txt");
    if(isFileExist&&!FileInfo.isFile())
    {
        QMessageBox::warning(this,"警告","未找到文件或文件已被删除");
        return;
    }


    QString path=QFileDialog::getOpenFileName(this,"文件路径","./res/%1.txt").arg("数据");

    ui->lineEdit_mulu->setText(path);

    //显示文件内容
    QFile f(path);
    //设置打开方式

    f.open(QIODevice::ReadWrite|QIODevice::Text);

    QByteArray ary;//=f.readAll();
    while(!f.atEnd())
    {
        ary+=f.readLine();//按行读
        //将读到的数据转码
        QString str=Codec->toUnicode(ary);
        ui->textEdit->setText(str);//设置内容到控件中

    }

    f.close();//对对象进行关闭
//    //查找功能实现
//    connect(ui->toolButton_lookup,&QToolButton::clicked,[=](){
//        //这里创建了一个对话框，然后将一个行编辑器和一个按钮放到了上面，并使用布局管理器进行布局。
//        findDlg = new QDialog(this);
//        findDlg->setWindowTitle(tr("lookup"));
//        findLineEdit = new QLineEdit(findDlg);
//        QPushButton *btn= new QPushButton(tr("Find next"), findDlg);
//        QVBoxLayout *layou= new QVBoxLayout(findDlg);
//        layou->addWidget(findLineEdit);
//        layou->addWidget(btn);


//        connect(btn,&QPushButton::clicked,[=](){

//         });
//        findDlg->show();

//    });

//    connect(ui->toolButton,&QToolButton::clicked,[=](){
//        writeTxt();
//    });

}

Show_Person::~Show_Person()
{
    delete ui;
}
//void Show_Person::writeTxt()
//{
//     QString strAll;
//     QStringList strList;
//     QFile readFile("./res/数据.txt");		//PATH是自定义读取文件的地址
//     if(readFile.open((QIODevice::ReadOnly|QIODevice::Text)))
//     {
//         //把文件所有信息读出来
//         QTextStream stream(&readFile);
//         strAll=stream.readAll();
//     }
//     readFile.close();

//     QFile writeFile("./res/数据.txt");	//PATH是自定义写文件的地址
//     if(writeFile.open(QIODevice::WriteOnly|QIODevice::Text))
//     {
//             QTextStream stream(&writeFile);
//             strList=strAll.split("\n");           //以换行符为基准分割文本
//             for(int i=0;i<strList.count();i++)    //遍历每一行
//             {
//                 if(strList.at(i).contains("45"))    //"123456789"是要修改的内容
//                 {
//                     QString tempStr=strList.at(i);
//                     tempStr.replace(0,tempStr.length(),"Hello!");   //"Hello!"是要替换的内容
//                     stream<<tempStr<<'\n';
//                 }
//                 //如果没有找到要替换的内容，照常写入
//                 else
//                 {
//                     if(i==strList.count()-1)
//                     {
//                        stream<<strList.at(i);
//                     }
//                     else
//                     {
//                        stream<<strList.at(i)<<'\n';
//                     }
//                 }
//             }
//     }
//     writeFile.close();
//}





