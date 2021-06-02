#ifndef METHODUNIT_H
#define METHODUNIT_H

#include "iostream"
#include "memory"
#include "unit.h"
#include "vector"

/*
 * Описание абстрактного класса для объектов абстрактной фабрики,
 * представляющих Функции-члена класса
*/
class MethodUnit : public Unit
{
    public:
    /*
     * Определяем перечисление возможных модификаторов для функции-члена
     * в виде битовых флагов
     * Их комбинацию мы и ожидаем получать в качестве третьего аргумента
     * конструктора flags для конкретных объектов, наследющихся от данного класса
    */
        enum Modifier {
            STATIC = 1,
            CONST = 1 << 1,
            VIRTUAL = 1 << 2,
            FINAL = 1 << 3,
            ABSTRACT = 1 << 4,
            SEALED = 1 << 5,
            OVERRIDE = 1 << 6
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
        void add(const std::shared_ptr< Unit > &unit, Flags flags);
    protected:
        /*
         * Вектор элементов, вкладывющихся в тело функции
        */
        std::vector< std::shared_ptr< Unit >> m_body;
};

#endif // METHODUNIT_H
