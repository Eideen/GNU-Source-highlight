/*
 * stylefileparser.cpp
 *
 *  Created on: Dec 9, 2008
 *      Author: Lorenzo Bettini <http://www.lorenzobettini.it>, (C) 2008
 *  Copyright: See COPYING file that comes with this distribution
 */

#include "stylefileparser.h"
#include "parsestyles.h"
#include "settings.h"

namespace srchilite {

void StyleFileParser::parseStyleFile(const std::string &name,
            FormatterFactory *formatterFactory, std::string &bodyBgColor) {
    parseStyles(name, formatterFactory, bodyBgColor);
}

void StyleFileParser::parseCssStyleFile(const std::string &name,
            FormatterFactory *formatterFactory, std::string &bodyBgColor) {
    parseCssStyles(Settings::retrieveDataDir(), name, formatterFactory, bodyBgColor);
}

}
