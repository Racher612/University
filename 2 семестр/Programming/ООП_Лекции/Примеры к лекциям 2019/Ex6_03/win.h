#ifndef WIN_H
#define WIN_H

#include <QWidget>
#include <QFrame>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QValidator>

class Win:public QWidget      // класс окна
{
    Q_OBJECT  // макрос Qt для реализации сигналов и слотов
protected:
    QTextCodec *codec;       // перекодировщик
    QFrame *frame;           // рамка
    QLabel *inputLabel;      // метка ввода
    QLineEdit *inputEdit;    // строчный редактор ввода
    QLabel *outputLabel;     // метка вывода
    QLineEdit *outputEdit;   // строчный редактор вывода
    QPushButton *nextButton; // кнопка Следующее
    QPushButton *exitButton; // кнопка Выход
public:
    Win(QWidget *parent = 0); // конструктор
public slots:
    void begin();      // инициализация интерфейса
    void calc();       // реализация вычислений
};
class StrValidator:public QValidator // класс проверки ввода
{
public:
    StrValidator(QObject *parent):QValidator(parent){}
    virtual State validate(QString &str,int &pos)const
    {
        return Acceptable;  // метод всегда принимает
                            // вводимую строку
    }
};

#endif
