#include "cppprintoperatorunit.h"

/*
 * В данной конкретной реализации функции compile происходит следующее:
 * генерируем отступ и выводим название функции вывода с встроенным в нее,
 * переданным текстом
 */
std::string CppPrintOperatorUnit::compile(unsigned int level) const {
    return generateShift(level) + "printf( \"" + m_text + "\" );\n";
}
