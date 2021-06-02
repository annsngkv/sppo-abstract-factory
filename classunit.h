#ifndef CLASSUNIT_H
#define CLASSUNIT_H

#include "iostream"
#include "memory"
#include "vector"
#include "unit.h"

/*
 * Описание абстрактного класса для объектов абстрактной фабрики,
 * представляющих сущность Класс
*/
class ClassUnit : public Unit
{
    public:
        /*
         * Определяем перечисление возможных модификаторов доступа класса
         * Эти модификаторы ожидаются вторым аргументов в функции add
        */
        enum AccessModifier {
            PUBLIC,
            PROTECTED,
            PRIVATE,
            INTERNAL,
            PROTECTED_INTERNAL,
            DEFAULT
        };
    public:
        /*
         * Определяем конкретную реализацию для функции add,
         * которая предназначена для добавления вложенных элементов
         * (передача происходит через умный указатель) умный указатель std::shared_ptr)
         * Также эта функция принимает параметр Flags, хранящий в себе модификатор(-ы) вложенного элемента
         * или модификатор(-ы), вызывающего элемента
         *
         * arg const std::shared_ptr
         * arg Flags
        */
        void add(const std::shared_ptr< Unit > &, Flags);
    protected:
        /* Вектор строк - назвние модификаторов доступа,
         * которые используются для отображения модификаторов
         * доступа при генерации кода (порядок значений должен совападать с перечислением AccessModifier)
        */
        static const std::vector< std::string > ACCESS_MODIFIERS;
        /*
         * Используем Fields в качестве псевдонима для типа std::vector< std::shared_ptr< Unit >>;
        */
        using Fields = std::vector< std::shared_ptr< Unit >>;
        /*
         * Вектор векторов с элементами, вкладывющимися в класс по  конкретным доступам
        */
        std::vector< Fields > m_fields;
};

#endif // CLASSUNIT_H

