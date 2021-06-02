#include "programgenerator.h"

std::string ProgramGenerator::generateProgram()
{
    //Получаем объект - класс для конкретного языка
    std::shared_ptr<ClassUnit> myClass(language->createClassUnit("MyClass"));

    //Получаем объекты - функции-члены класса для конкретного языка
    std::shared_ptr<MethodUnit> testFunc1(language->createMethodUnit("testFunc1", "void", 0));
    std::shared_ptr<MethodUnit> testFunc2(language->createMethodUnit("testFunc2", "void", MethodUnit::STATIC));
    std::shared_ptr<MethodUnit> testFunc3(language->createMethodUnit("testFunc3", "void", MethodUnit::VIRTUAL | MethodUnit::CONST));

    //Выполняем вложение элементов в класс
    myClass->add(testFunc1, ClassUnit::PUBLIC);
    myClass->add(testFunc2, ClassUnit::PRIVATE);
    myClass->add(testFunc3, ClassUnit::PUBLIC);

    /* Получаем объект член-функцию и  оператор печати для конкретного языка,
     * и вкладываем оператор в функцию
    */
    std::shared_ptr<MethodUnit> testFunc4(language->createMethodUnit("testFunc4", "void", MethodUnit::STATIC));
    std::shared_ptr<PrintOperatorUnit> printFunc(language->createPrintOperatorUnit(R"(Hello, world!\n)"));

    testFunc4->add(printFunc, 0);

    //Выполняем вложение 4-й функции в класс
    myClass->add(testFunc4, ClassUnit::PROTECTED);

    //Выполняем генерацию класса
    return myClass->compile();
}
