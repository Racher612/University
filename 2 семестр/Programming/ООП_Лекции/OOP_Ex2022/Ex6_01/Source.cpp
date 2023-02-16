#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);  // создание объекта-приложения

	QWidget win;                  // создание объекта управления окном
	win.setWindowTitle("Hello"); // изменение заголовка окна

	QLabel *helloLabel = new QLabel("Hello!", &win); // создание метки
	QPushButton *exitButton = new QPushButton("Close", &win); // создание кнопки

	QHBoxLayout *layout = new QHBoxLayout(&win); // создание менеджера
							// компоновки для управления размещением метки и кнопки в окне win
	layout->addWidget(helloLabel);    // добавление метки к компоновщику
	layout->addWidget(exitButton);    // добавление кнопки  к компоновщику

	// связь сигнала нажатия кнопки с закрытием окна win
	QObject::connect(exitButton, SIGNAL(clicked(bool)),
		&win, SLOT(close()));

	win.show();    // визуализация окна win 
	app.exec();     // запуск цикла обработки сообщений приложения
	return 0;
}
