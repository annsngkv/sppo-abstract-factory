#include "javaclassunit.h"

std::string JavaClassUnit::compile(unsigned int level) const {
    //Первая строка кода с именем класса и открывающейся фигурной скобкой
    std::string result = generateShift(level) + "class " + m_name + "{\n";

    /*
    * Проходимся по всем модификаторам доступа, если
    * в данном модификаторе нет никаких элементов, идем дальше,
    * если есть, то проходимся по всем элементам в этом модификаторе
    * сначала указываем этот модификатор, генерируем рядом с ним элемент и тд
    *
   */
    for (size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i) {
        if (m_fields[i].empty()) {
            continue;
        }

        for (const auto &f : m_fields[i]) {
            result += generateShift(4) + ACCESS_MODIFIERS[i] + f->compile(level + 1) + "\n";
        }
    }

    //Ставим закрывающую скобку с точкой запятой в конце
    result += generateShift(level) + "};\n";

    return result;
}
