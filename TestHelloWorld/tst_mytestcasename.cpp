#include <QtTest>
#include "multiplicator.h"
#include <iostream>

// add necessary includes here

class MyTestCaseName : public QObject
{
    Q_OBJECT

public:
    MyTestCaseName();
    ~MyTestCaseName();

private slots:
    void test_case1();
};

MyTestCaseName::MyTestCaseName() {}

MyTestCaseName::~MyTestCaseName() {}

void MyTestCaseName::test_case1()
{
    Multiplicator m;
    QVERIFY(m.multiply(3, 3) == 9);
    std::cout.flush();
}

QTEST_APPLESS_MAIN(MyTestCaseName)

#include "tst_mytestcasename.moc"
