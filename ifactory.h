#ifndef IFACTORY_H
#define IFACTORY_H

#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"
#include "iostream"
#include "memory"

/*
 * Создание абстрактной фабрики
*/
class IFactory
{
    public:
        /*
         * Объявляем интерфейс фабричных методов,
         * служащих для создания объектов всех основных типов (один фабричный метод на
         * каждый тип объекта).
        */

        /*
         * Создание объекта Класс
        */
        virtual std::shared_ptr<ClassUnit> createClassUnit(const std::string &name) = 0;
        /*
         * Создание объекта Функция-член
        */
        virtual std::shared_ptr<MethodUnit> createMethodUnit(const std::string &name, const std::string &returnType, unsigned int flags) = 0;
        /*
         * Создание объекта Оператор печати
        */
        virtual std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(const std::string &text) = 0;
        /*
         * Указываем компилятору самостоятельно сгенерировать деструктор по-умолчанию
         */
        virtual ~IFactory() = default;
};

#endif // IFACTORY_H
