#include <QCoreApplication>
#include "cppfactory.h"
#include "javafactory.h"
#include "csharpfactory.h"
#include "programgenerator.h"
#include "iostream"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    std::cout << "C++ PROGRAM GENERATING" << std::endl;
    std::cout << "_____________________________________" << std::endl;

    CppFactory *cpp_factory = new CppFactory();
    ProgramGenerator *cpp = new ProgramGenerator(cpp_factory);
    std::cout << cpp->generateProgram() << std::endl;

    std::cout << "JAVA PROGRAM GENERATING" << std::endl;
    std::cout << "_____________________________________" << std::endl;

    JavaFactory *java_factory = new JavaFactory();
    ProgramGenerator *java = new ProgramGenerator(java_factory);
    std::cout << java->generateProgram() << std::endl;

    std::cout << "C# PROGRAM GENERATING" << std::endl;
    std::cout << "_____________________________________" << std::endl;

    CSharpFactory *csh_factory = new CSharpFactory();
    ProgramGenerator *csh = new ProgramGenerator(csh_factory);
    std::cout << csh->generateProgram() << std::endl;

    return a.exec();
}
