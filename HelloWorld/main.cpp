#include <QCoreApplication>
#include <iostream>
#include <multiplicator.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Multiplicator m;
    int b = m.multiply(3, 4);
    std::cout << "3 * 4 = " << b << std::endl;
    exit(0);

    return a.exec();
}
