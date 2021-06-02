#ifndef UNIT_H
#define UNIT_H

#include "iostream"
#include "memory"

/*
 * Абстрактный класс Unit, представляющий некую языковую конструкцию
 * Самый базовый класс для нашего множества объектов абстрактной фабрики
*/
class Unit
{
    public:
        /*
         * Используем Flags в качестве псевдонима для типа unsigned int
        */
        using Flags = unsigned int;
    public:
        /*
         * Указываем компилятору самостоятельно сгенерировать деструктор по-умолчанию
         */
        virtual ~Unit() = default;
        /*
         * Виртуальная функция-член предназначена для добавления вложенных элементов
         * (передача происходит через умный указатель) умный указатель std::shared_ptr)
         * Также эта функция принимает параметр Flags, хранящий в себе модификатор(-ы) вложенного элемента
         * или модификатор(-ы), вызывающего элемента
         * По умолчанию функция выбрасывает исключение.
         *
         * arg const std::shared_ptr
         * arg Flags
        */
        virtual void add(const std::shared_ptr< Unit > &, Flags) {
            throw std::runtime_error("Not supported");
        }
        /*
         * Функция предназначенная для генерации кода
         * на выбранном языке, соответствующего содержимому элемента
         *
         * В качестве аргумента функция принимает параметр level, указывающий на уровень
         * вложенности узла дерева. Это требуется для корректной расстановки отступов в
         * начале строк генерируемого кода.
         *
         * arg unsigned int
         *
         * return std::string
        */
        virtual std::string compile(unsigned int level = 0) const = 0;
    protected:
        /*
         * Вспомогательная функция-член
         * всего лишь возвращает строку, состоящую из нужного числа пробелов. Результат
         * зависит от уровня вложенности (level)
         *
         * arg unsigned int level
         *
         * return std::string
         */
        virtual std::string generateShift(unsigned int level) const {
            static const auto DEFAULT_SHIFT = " ";
            std::string result;

            for (unsigned int i = 0; i < level; ++i) {
                result += DEFAULT_SHIFT;
            }

            return result;
        }
};

#endif // UNIT_H
