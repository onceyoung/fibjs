/*
 * TextColor.h
 *
 *  Created on: Apr 16, 2014
 *      Author: lion
 */

#ifndef TEXTCOLOR_H_
#define TEXTCOLOR_H_

#include "ifs/TextColor.h"

namespace fibjs {

#define COLOR_RESET "\x1b[0m"
#define COLOR_BLACK "\x1b[0;30m" /* Black */
#define COLOR_RED "\x1b[0;31m" /* Red */
#define COLOR_GREEN "\x1b[0;32m" /* Green */
#define COLOR_YELLOW "\x1b[0;33m" /* Yellow */
#define COLOR_BLUE "\x1b[0;34m" /* Blue */
#define COLOR_MAGENTA "\x1b[0;35m" /* Magenta */
#define COLOR_CYAN "\x1b[0;36m" /* Cyan */
#define COLOR_WHITE "\x1b[0;37m" /* White */
#define COLOR_NORMAL "\x1b[0;39m" /* Normal */
#define COLOR_GREY "\x1B[90m" /* Grey */

#define COLOR_LIGHTRED "\x1b[1;31m" /* Red */
#define COLOR_LIGHTGREEN "\x1b[1;32m" /* Green */
#define COLOR_LIGHTYELLOW "\x1b[1;33m" /* Yellow */
#define COLOR_LIGHTBLUE "\x1b[1;34m" /* Blue */
#define COLOR_LIGHTMAGENTA "\x1b[1;35m" /* Magenta */
#define COLOR_LIGHTCYAN "\x1b[1;36m" /* Cyan */
#define COLOR_LIGHTWHITE "\x1b[1;37m" /* White */

#define COLOR_TITLE "\x1B[1;39m"

class TextColor : public TextColor_base {
public:
    TextColor()
    {
        m_error = COLOR_LIGHTRED;
        m_warn = COLOR_YELLOW;
        m_notice = COLOR_GREEN;
        m_highLight = COLOR_TITLE;
    }

public:
    // TextColor_base
    virtual result_t get_notice(exlib::string& retVal);
    virtual result_t set_notice(exlib::string newVal);
    virtual result_t get_warn(exlib::string& retVal);
    virtual result_t set_warn(exlib::string newVal);
    virtual result_t get_error(exlib::string& retVal);
    virtual result_t set_error(exlib::string newVal);
    virtual result_t get_highLight(exlib::string& retVal);
    virtual result_t set_highLight(exlib::string newVal);

public:
    exlib::string m_notice;
    exlib::string m_warn;
    exlib::string m_error;
    exlib::string m_highLight;
};
}

#endif /* STAT_H_ */
