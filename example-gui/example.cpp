#include "example.h"

MyWindow::MyWindow() {
    setWindowTitle("Example");

    input = new QLineEdit;
    QPushButton *button = new QPushButton("Calculate");
    QObject::connect(button, SIGNAL(clicked()), SLOT(doSomething()));
    output = new QLineEdit;

    QFormLayout *layout = new QFormLayout;
    layout->addRow("Input", input);
    layout->addRow(button);
    layout->addRow("Output", output);

    setLayout(layout);
}

void MyWindow::doSomething() {
    int i = input->text().toInt();
    i = getResult(i*10, i);
    output->setText(QString::number(i));
}


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MyWindow *window = new MyWindow;
    window->show();
    return app.exec();
}
