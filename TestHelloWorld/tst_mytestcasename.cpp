#include <QtTest>
#include "multiplicator.h"

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
    QVERIFY(m.multiply(3, 3) == 8);
}

QTEST_APPLESS_MAIN(MyTestCaseName)

#include "tst_mytestcasename.moc"
