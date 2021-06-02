#ifndef CSHARPFACTORY_H
#define CSHARPFACTORY_H

/*
 * Создание конкретнойй фабрики, предназначенной для
 * создания объектов всех типов внутри семейства,
 * относящегося к языку C#
*/
class CSharpFactory
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
         * return ClassUnit *
        */
        ClassUnit * createClassUnit(const std::string &name);

        /*
         * Создание объекта Функция-член
         *
         * arg const std::string &name
         * arg const std::string &returnType
         * arg const std::string &returnType
         *
         * return MethodUnit *
        */
        MethodUnit * createMethodUnit(const std::string &name, const std::string &returnType, unsigned int flags);

        /*
         * Создание объекта Оператор печати
         *
         * arg const std::string &text
         *
         * return PrintOperatorUnit *
        */
        PrintOperatorUnit * createPrintOperatorUnit(const std::string &text);
};

#endif // CSHARPFACTORY_H
