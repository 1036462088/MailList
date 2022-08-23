#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDateTime>
#include <QTimer>
#include <QLabel>
#include <QVBoxLayout>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void DateTime();


    void timeUpdate(void);

    void freeFile();


    QDateTime dateTime;

    QTimer *time=NULL;
    QLabel *label=NULL;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
