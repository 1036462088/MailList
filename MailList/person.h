#ifndef PERSON_H
#define PERSON_H

#include <QWidget>

namespace Ui {
class Person;
}

class Person : public QWidget
{
    Q_OBJECT

public:
    explicit Person(QWidget *parent = nullptr);
    ~Person();

    //将数据写入至txt文档
    void SaveTxt();
   const char* CHAR(QString str);

   //显示联系人
   //void showfile();

private:
    Ui::Person *ui;
};

#endif // PERSON_H
