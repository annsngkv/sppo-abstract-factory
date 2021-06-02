#include "cppmethodunit.h"

//Класс конструктора с параметрами
CppMethodUnit::CppMethodUnit(const std::string &name, const std::string &returnType, Flags flags) :
    m_name(name), m_returnType(returnType), m_flags(flags) {}

/*
 * В данной конкретной реализации функции compile происходит следующее:
 * 1) Добавляем отступ
 * 2) Проверяем, были ли переданы в конструктор модификаторы STATIC и VIRTUAL,
 * если да, то печатаем их, иначе ничего
 * 3) Выводим тип возвращаемого значения и имя функции
 * 4) Проверяем, были ли переданы в конструктор модификатор CONST,
 * если да, то печатаем его, иначе ничего
 * 5) Проходимся по всем элементам вектора m_body (тело функции) и генерируем их
 * 6) В конце ставим закрывающую скобку
*/
std::string CppMethodUnit::compile(unsigned int level) const {
    std::string result = generateShift(level);

    if (m_flags & STATIC) {
        result += "static ";
    } else if (m_flags & VIRTUAL) {
        result += "virtual ";
    }

    result += m_returnType + " ";
    result += m_name + "()";

    if (m_flags & CONST) {
        result += " const";
    }

    result += " {\n";

    for (const auto &b : m_body) {
        result += b->compile(level + 1);
    }

    result += generateShift(level) + "}\n";

    return result;
}
