#include "csharpmethodunit.h"

//Конструктор класса с параметрами
CSharpMethodUnit::CSharpMethodUnit(const std::string &name, const std::string &returnType, Flags flags) :
    m_name(name), m_returnType(returnType), m_flags(flags) {}

/*
 * В данной конкретной реализации функции compile происходит следующее:
 * 1) Добавляем отступ
 * 2) Проверяем, были ли переданы в конструктор модификаторы STATIC и VIRTUAL,
 * если да, то печатаем их, иначе ничего
 * 3) Выводим тип возвращаемого значения и имя функции
 * 4) Проходимся по всем элементам вектора m_body (тело функции) и генерируем их
 * 5) В конце ставим закрывающую скобку
*/
CSharpMethodUnit::CSharpMethodUnit()
{
    std::string result = generateShift(level);

    if (m_flags & STATIC) {
        result += "static ";
    } else if (m_flags & VIRTUAL) {
        result += "virtual ";
    }

    result += m_returnType + " ";
    result += m_name + "()";

    result += "\n" + generateShift(level + 3) + "{\n";

    for (const auto &b : m_body) {
        result += b->compile(level + 7);
    }

    result += generateShift(level + 3) + "}\n";

    return result;
}
