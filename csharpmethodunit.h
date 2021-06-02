#ifndef CSHARPMETHODUNIT_H
#define CSHARPMETHODUNIT_H

#include "methodunit.h"
#include "vector"

/*
 * Описание конкретного класса - объекта абстрактной фабрики группы С++,
 * представляющего Функцию-член класса
*/
class CSharpMethodUnit : public MethodUnit
{
    // Имя функции
    std::string m_name;
    // Тип возвращаемого значения
    std::string m_returnType;
    // Модификаторы
    Flags m_flags;

    public:
        /*
         * Конструктор класса с параметрами, устанавливющий имя функции,
         * тип возвращаемого значения и модификаторы
         *
        */
        explicit CSharpMethodUnit(const std::string &name, const std::string &returnType, Flags flags);
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

#endif // CSHARPMETHODUNIT_H
