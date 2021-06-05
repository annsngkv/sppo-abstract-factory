#ifndef CSHARPFACTORY_H
#define CSHARPFACTORY_H

#include "ifactory.h"
#include "iostream"
#include "memory"
#include "csharpclassunit.h"
#include "csharpmethodunit.h"
#include "csharpprintoperatorunit.h"

/*
 * Создание конкретнойй фабрики, предназначенной для
 * создания объектов всех типов внутри семейства,
 * относящегося к языку C#
*/
class CSharpFactory : public IFactory
{
    public:
        /* Определяем конкртетные реализации фабричных методов,
         * служащих для создания объектов всех основных типов (один фабричный метод на
         * каждый тип объекта).
        */

        /*
         * Создание объекта Класс
         *
         * arg const std::string &name
         *
         * return std::shared_ptr<ClassUnit>
        */
        std::shared_ptr<ClassUnit> createClassUnit(const std::string &name);

        /*
         * Создание объекта Функция-член
         *
         * arg const std::string &name
         * arg const std::string &returnType
         * arg const std::string &returnType
         *
         * return std::shared_ptr<MethodUnit>
        */
        std::shared_ptr<MethodUnit> createMethodUnit(const std::string &name, const std::string &returnType, unsigned int flags);

        /*
         * Создание объекта Оператор печати
         *
         * arg const std::string &text
         *
         * return std::shared_ptr<PrintOperatorUnit>
        */
        std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(const std::string &text);
};

#endif // CSHARPFACTORY_H
