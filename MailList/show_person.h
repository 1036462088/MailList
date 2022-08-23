#ifndef SHOW_PERSON_H
#define SHOW_PERSON_H

#include <QWidget>
#include <QLineEdit>
class QLineEdit;
class QDialog;
namespace Ui {
class Show_Person;
}

class Show_Person : public QWidget
{
    Q_OBJECT

public:
    explicit Show_Person(QWidget *parent = nullptr);
    ~Show_Person();
    QLineEdit *findLineEdit;
    QDialog *findDlg;

void writeTxt();

private:
    Ui::Show_Person *ui;


};

#endif // SHOW_PERSON_H
