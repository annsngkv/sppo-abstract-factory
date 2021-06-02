#include <QCoreApplication>
#include "cppfactory.h"
#include "javafactory.h"
#include "csharpfactory.h"
#include "programgenerator.h"
#include "iostream"

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
    CppFactory *cpp_factory = new CppFactory();
    ProgramGenerator *cpp = new ProgramGenerator(cpp_factory);
    std::cout << cpp->generateProgram() << std::endl;

    std::cout << "_____________________________________" << std::endl;
    std::cout << "JAVA PROGRAM GENERATING" << std::endl;
    std::cout << "_____________________________________" << std::endl;

    /*
     * Получаем фабрику для java
     * Получаем генератор программы относительно выбранного языка,
     * и производим генерацию программы
    */
    JavaFactory *java_factory = new JavaFactory();
    ProgramGenerator *java = new ProgramGenerator(java_factory);
    std::cout << java->generateProgram() << std::endl;

    std::cout << "_____________________________________" << std::endl;
    std::cout << "C# PROGRAM GENERATING" << std::endl;
    std::cout << "_____________________________________" << std::endl;

    /*
     * Получаем фабрику для c#
     * Получаем генератор программы относительно выбранного языка,
     * и производим генерацию программы
    */
    CSharpFactory *csh_factory = new CSharpFactory();
    ProgramGenerator *csh = new ProgramGenerator(csh_factory);
    std::cout << csh->generateProgram() << std::endl;

    return a.exec();
}
