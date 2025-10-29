#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int start_pos = line.find("]") + 3;
    return line.substr(start_pos);
}

std::string log_level(std::string line) {
    // return the log level
    int end_pos = line.find("]")-1;
    return line.substr(1,end_pos);
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string message = log_line::message(line);
    std::string log_level = log_line::log_level(line);
    return message + " (" + log_level + ")";
}
}  // namespace log_line
