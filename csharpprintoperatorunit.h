#ifndef CSHARPPRINTOPERATORUNIT_H
#define CSHARPPRINTOPERATORUNIT_H

#include "printoperatorunit.h"

/*
 * Описание конкретного класса - объекта абстрактной фабрики группы С#,
 * представляющего Оператор печати
*/
class CSharpPrintOperatorUnit : public PrintOperatorUnit
{
    //Текст, который передается в функцию вывода оператора печати
    std::string m_text;

    public:
        /*
         * Конструктор класса с параметрами, устанавливющий текст
         * для оператора печати
        */
        explicit CSharpPrintOperatorUnit(const std::string &text) : m_text(text) {}

        /*
         * Определяем конкретную реализацию функции compile
         * Функция предназначенная для генерации кода
         * на выбранном языке (C#), соответствующего содержимому элемента
         *
         * В качестве аргумента функция принимает параметр level, указывающий на уровень
         * вложенности узла дерева. Это требуется для корректной расстановки отступов в
         * начале строк генерируемого кода.
         *
         * arg unsigned int
         *
         * return std::string
        */
        std::string compile(unsigned int level = 0) const;
};

#endif // CSHARPPRINTOPERATORUNIT_H
