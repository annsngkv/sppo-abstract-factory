#include "cppclassunit.h"

std::string CppClassUnit::compile(unsigned int level) const {
    //Первая строка кода с именем класса и открывающейся фигурной скобкой
    std::string result = generateShift(level) + "class " + m_name + " {\n";

    /*
     * Проходимся по всем модификаторам доступа, если
     * в данном модификаторе нет никаких элементов, идем дальше,
     * если есть, то сначала указываем этот модификатор, затем
     * проходимся по всем элементам в этом модификаторе
     * и генерируем их
    */
    for (size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i) {
        if (m_fields[i].empty()) {
            continue;
        }

        result += ACCESS_MODIFIERS[i] + ":\n";

        for (const auto &f : m_fields[i]) {
            result += f->compile(level + 1);
        }

        result += "\n";
    }

    //Ставим закрывающую скобку с точкой запятой в конце
    result += generateShift(level) + "};\n";

    return result;
}
