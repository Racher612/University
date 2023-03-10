#include "win.h"
#include <QTextCodec>
#include <QVBoxLayout>

Win::Win(QWidget *parent):QWidget(parent)
{
    codec = QTextCodec::codecForName("Windows-1251");
    setWindowTitle(codec->toUnicode("?????????? ? ???????"));
    frame = new QFrame(this);
    frame -> setFrameShadow(QFrame::Raised);
    frame -> setFrameShape(QFrame::Panel);
    inputLabel =
          new QLabel(codec->toUnicode("??????? ?????:"),this);
    inputEdit = new QLineEdit("",this);
    StrValidator *v=new StrValidator(inputEdit);
    inputEdit -> setValidator(v);
    outputLabel =
          new QLabel(codec->toUnicode("?????????:"),this);
    outputEdit = new QLineEdit("",this);
    nextButton =
          new QPushButton(codec->toUnicode("?????????"),this);
    exitButton =
          new QPushButton(codec->toUnicode("?????"),this);
    QVBoxLayout *vLayout1 = new QVBoxLayout(frame);
    vLayout1->addWidget(inputLabel);
    vLayout1->addWidget(inputEdit);
    vLayout1->addWidget(outputLabel);
    vLayout1->addWidget(outputEdit);
    vLayout1->addStretch();

    QVBoxLayout *vLayout2 = new QVBoxLayout();
    vLayout2->addWidget(nextButton);
    vLayout2->addWidget(exitButton);
    vLayout2->addStretch();

    QHBoxLayout *hLayout = new QHBoxLayout(this);
    hLayout->addWidget(frame);
    hLayout->addLayout(vLayout2);
    begin();   // ????????????? ??????????

         // ????? ??????? ?????? ????? ? ???????? ???????? ????
    connect(exitButton,SIGNAL(clicked(bool)),
            this,SLOT(close()));
         // ????? ??????? ?????? ????????? ? ????????????? ??????????
    connect(nextButton,SIGNAL(clicked(bool)),
            this,SLOT(begin()));
         // ????? ??????? ??????? Enter ? ??????????
    connect(inputEdit,SIGNAL(returnPressed()),
            this,SLOT(calc()));
}
void Win::begin()
{
    inputEdit->clear();             // ??????? ?????? ?????
    nextButton->setEnabled(false);  // ??????????? ?????? ?????????
    nextButton->setDefault(false);   // ?????? ????????? ??????
                                                                              // ????????? ??? ??????? Enter
    inputEdit->setEnabled(true);     // ????????? ?????? ?????
    outputLabel->setVisible(false);  // ???????? ????? ??????????
    outputEdit->setVisible(false);   // ???????? ?????? ??????????
    inputEdit->setFocus();        // ????????? ?????? ?? ?????? ?????
}
void Win::calc()
{
    bool Ok=true;
    float r,a;
    QString str=inputEdit->text(); // ??????????? ????????? ??????
    a=str.toDouble(&Ok);           // ?????????????? ?????? ? ?????
    if (Ok)                        // ???? ?????????????? ???????, ??
    {
        r=a*a;                     // ???????? ????? ? ???????
        str.setNum(r);             // ??????????? ????? ? ??????
        outputEdit->setText(str);  // ??????? ????????? ? ???? ??????????
        inputEdit->setEnabled(false);  // ???????????? ???? ?????
        outputEdit->setEnabled(false); // ???????????? ???? ??????
        outputLabel->setVisible(true); // ?????????? ????? ??????????
        outputEdit->setVisible(true);  // ?????????? ???? ??????????
        nextButton->setDefault(true);  // ????????? ????????? ???????
                                       // ???????????? ?? ??????? ??????? Enter
        nextButton->setFocus();        // ????????????? ????? ? ??????????
        nextButton->setEnabled(true);  // ?????? ?????????
    }
}

QValidator::State StrValidator::validate(QString &str,int &pos)const
{
  return Acceptable;  // ????? ?????? ?????????
                        // ???????? ??????
}
