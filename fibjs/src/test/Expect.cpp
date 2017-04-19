/*
 * Expect.cpp
 *
 *  Created on: Nov 8, 2013
 *      Author: lion
 */

#include "object.h"
#include "Expect.h"
#include "ifs/assert.h"

namespace fibjs {

result_t Expect::get_to(obj_ptr<Expect_base>& retVal)
{
    retVal = this;
    return 0;
}

result_t Expect::get_be(obj_ptr<Expect_base>& retVal)
{
    retVal = this;
    return 0;
}

result_t Expect::get_been(obj_ptr<Expect_base>& retVal)
{
    retVal = this;
    return 0;
}

result_t Expect::get_is(obj_ptr<Expect_base>& retVal)
{
    retVal = this;
    return 0;
}

result_t Expect::get_that(obj_ptr<Expect_base>& retVal)
{
    retVal = this;
    return 0;
}

result_t Expect::get_and(obj_ptr<Expect_base>& retVal)
{
    retVal = this;
    return 0;
}

result_t Expect::get_have(obj_ptr<Expect_base>& retVal)
{
    retVal = this;
    return 0;
}

result_t Expect::get_with(obj_ptr<Expect_base>& retVal)
{
    retVal = this;
    return 0;
}

result_t Expect::get_at(obj_ptr<Expect_base>& retVal)
{
    retVal = this;
    return 0;
}

result_t Expect::get_of(obj_ptr<Expect_base>& retVal)
{
    retVal = this;
    return 0;
}

result_t Expect::get_same(obj_ptr<Expect_base>& retVal)
{
    retVal = this;
    return 0;
}

result_t Expect::get_not(obj_ptr<Expect_base>& retVal)
{
    m_not = !m_not;
    retVal = this;
    return 0;
}

result_t Expect::get_deep(obj_ptr<Expect_base>& retVal)
{
    m_deep = true;
    retVal = this;
    return 0;
}

result_t Expect::a(exlib::string type)
{
    return !m_not ? assert_base::typeOf(m_actual, type, m_msg) : assert_base::notTypeOf(m_actual, type, m_msg);
    return 0;
}

result_t Expect::an(exlib::string type)
{
    return a(type);
}

result_t Expect::get_ok(bool& retVal)
{
    return !m_not ? assert_base::ok(m_actual, m_msg) : assert_base::notOk(m_actual, m_msg);
}

result_t Expect::get_true(bool& retVal)
{
    return !m_not ? assert_base::isTrue(m_actual, m_msg) : assert_base::isNotTrue(m_actual, m_msg);
}

result_t Expect::get_false(bool& retVal)
{
    return !m_not ? assert_base::isFalse(m_actual, m_msg) : assert_base::isNotFalse(m_actual, m_msg);
}

result_t Expect::get_null(bool& retVal)
{
    return !m_not ? assert_base::isNull(m_actual, m_msg) : assert_base::isNotNull(m_actual, m_msg);
}

result_t Expect::get_undefined(bool& retVal)
{
    return !m_not ? assert_base::isUndefined(m_actual, m_msg) : assert_base::isDefined(m_actual, m_msg);
}

result_t Expect::get_function(bool& retVal)
{
    return !m_not ? assert_base::isFunction(m_actual, m_msg) : assert_base::isNotFunction(m_actual, m_msg);
}

result_t Expect::get_object(bool& retVal)
{
    return !m_not ? assert_base::isObject(m_actual, m_msg) : assert_base::isNotObject(m_actual, m_msg);
}

result_t Expect::get_array(bool& retVal)
{
    return !m_not ? assert_base::isArray(m_actual, m_msg) : assert_base::isNotArray(m_actual, m_msg);
}

result_t Expect::get_string(bool& retVal)
{
    return !m_not ? assert_base::isString(m_actual, m_msg) : assert_base::isNotString(m_actual, m_msg);
}

result_t Expect::get_number(bool& retVal)
{
    return !m_not ? assert_base::isNumber(m_actual, m_msg) : assert_base::isNotNumber(m_actual, m_msg);
}

result_t Expect::get_boolean(bool& retVal)
{
    return !m_not ? assert_base::isBoolean(m_actual, m_msg) : assert_base::isNotBoolean(m_actual, m_msg);
}

result_t Expect::get_exist(bool& retVal)
{
    return !m_not ? assert_base::exist(m_actual, m_msg) : assert_base::notExist(m_actual, m_msg);
}

result_t Expect::equal(v8::Local<v8::Value> expected)
{
    if (m_deep)
        return !m_not ? assert_base::deepEqual(m_actual, expected, m_msg) : assert_base::notDeepEqual(m_actual, expected, m_msg);

    return !m_not ? assert_base::strictEqual(m_actual, expected, m_msg) : assert_base::notStrictEqual(m_actual, expected, m_msg);
}

result_t Expect::eql(v8::Local<v8::Value> expected)
{
    m_deep = true;
    return equal(expected);
}

result_t Expect::above(v8::Local<v8::Value> expected)
{
    return !m_not ? assert_base::greaterThan(m_actual, expected, m_msg) : assert_base::notGreaterThan(m_actual, expected, m_msg);
}

result_t Expect::greaterThan(v8::Local<v8::Value> expected)
{
    return above(expected);
}

result_t Expect::least(v8::Local<v8::Value> expected)
{
    return !m_not ? assert_base::notLessThan(m_actual, expected, m_msg) : assert_base::lessThan(m_actual, expected, m_msg);
}

result_t Expect::below(v8::Local<v8::Value> expected)
{
    return !m_not ? assert_base::lessThan(m_actual, expected, m_msg) : assert_base::notLessThan(m_actual, expected, m_msg);
}

result_t Expect::lessThan(v8::Local<v8::Value> expected)
{
    return below(expected);
}

result_t Expect::most(v8::Local<v8::Value> expected)
{
    return !m_not ? assert_base::notGreaterThan(m_actual, expected, m_msg) : assert_base::greaterThan(m_actual, expected, m_msg);
}

result_t Expect::property(v8::Local<v8::Value> prop)
{
    if (m_deep)
        return !m_not ? assert_base::deepProperty(m_actual, prop, m_msg) : assert_base::notDeepProperty(m_actual, prop, m_msg);

    return !m_not ? assert_base::property(m_actual, prop, m_msg) : assert_base::notProperty(m_actual, prop, m_msg);
}

result_t Expect::property(v8::Local<v8::Value> prop,
    v8::Local<v8::Value> value)
{
    if (m_deep)
        return !m_not ? assert_base::deepPropertyVal(m_actual, prop, value, m_msg) : assert_base::deepPropertyNotVal(m_actual, prop, value, m_msg);

    return !m_not ? assert_base::propertyVal(m_actual, prop, value, m_msg) : assert_base::propertyNotVal(m_actual, prop, value, m_msg);
}

result_t Expect::closeTo(v8::Local<v8::Value> expected,
    v8::Local<v8::Value> delta)
{
    return !m_not ? assert_base::closeTo(m_actual, expected, delta, m_msg) : assert_base::notCloseTo(m_actual, expected, delta, m_msg);
}
}
