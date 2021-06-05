#include <QCoreApplication>
#include "cppfactory.h"
#include "javafactory.h"
#include "csharpfactory.h"
#include "programgenerator.h"
#include "iostream"
#include "memory"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "_____________________________________" << std::endl;
    std::cout << "C++ PROGRAM GENERATING" << std::endl;
    std::cout << "_____________________________________" << std::endl;

    /*
     * Получаем фабрику для с++
     * Получаем генератор программы относительно выбранного языка,
     * и производим генерацию программы
    */
    ProgramGenerator cpp(std::make_shared<CppFactory>());
    std::cout << cpp.generateProgram() << std::endl;

    std::cout << "_____________________________________" << std::endl;
    std::cout << "JAVA PROGRAM GENERATING" << std::endl;
    std::cout << "_____________________________________" << std::endl;

    /*
     * Получаем фабрику для java
     * Получаем генератор программы относительно выбранного языка,
     * и производим генерацию программы
    */
    ProgramGenerator java(std::make_shared<JavaFactory>());
    std::cout << java.generateProgram() << std::endl;

    std::cout << "_____________________________________" << std::endl;
    std::cout << "C# PROGRAM GENERATING" << std::endl;
    std::cout << "_____________________________________" << std::endl;

    /*
     * Получаем фабрику для c#
     * Получаем генератор программы относительно выбранного языка,
     * и производим генерацию программы
    */
    ProgramGenerator csh(std::make_shared<CSharpFactory>());
    std::cout << csh.generateProgram() << std::endl;

    return a.exec();
}
