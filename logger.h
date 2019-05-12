// Distributed under the LGPL License (https://www.gnu.org/copyleft/lesser.html)

#ifndef _LOGGER_H_INCLUDED_
#define _LOGGER_H_INCLUDED_

#include "src/file_utils.h"

namespace logger {

class Logger {
public:
    bool log(const char* message);
    bool connect(const char* path);
    bool isConnected();
    bool start();
    bool stop();
    logger();
    ~logger();
private:
    utils::file::Writer writer;
}

} // namespace logger

#endif // _LOGGER_H_INCLUDED_
