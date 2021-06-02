#include "javaprintoperatorunit.h"

/*
 * В данной конкретной реализации функции compile происходит следующее:
 * генерируем отступ и выводим название функции вывода с встроенным в нее,
 * переданным текстом
*/
std::string JavaPrintOperatorUnit::compile(unsigned int level) const {
    return generateShift(level) + "System.out.println( \"" + m_text + "\" );\n";
}
