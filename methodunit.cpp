#include "methodunit.h"

/*
 * В данной конкретной реализации функции add
 * для Функции-члена просто помещаем все в конец вектора m_body, заполняя тело Функции
*/
void MethodUnit::add(const std::shared_ptr<Unit> &unit, Flags flags) {
    m_body.push_back(unit);
}
