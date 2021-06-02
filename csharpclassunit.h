#ifndef CSHARPCLASSUNIT_H
#define CSHARPCLASSUNIT_H

#include "classunit.h"

/*
 * Описание конкретного класса - объекта абстрактной фабрики группы С#,
 * представляющего сущность Класс
*/
class CSharpClassUnit : public ClassUnit
{
    /*
     * Имя класса
    */
    std::string m_name;

    public:
        /*
         * Конструктор класса с параметрами, устанавливющий имя класса
         * и переопределяющий размер вектора с юнитами
        */
        explicit CSharpClassUnit(const std::string &name) : m_name(name) {
            m_fields.resize(ACCESS_MODIFIERS.size());
        }

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

#endif // CSHARPCLASSUNIT_H
