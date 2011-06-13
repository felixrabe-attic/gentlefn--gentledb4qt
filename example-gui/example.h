#include <QtGui>

#include <GentleDB4Qt>

class MyWindow : public QWidget {
    Q_OBJECT

    QLineEdit *input;
    QLineEdit *output;

public:
    MyWindow();

private slots:
    void doSomething();

};
