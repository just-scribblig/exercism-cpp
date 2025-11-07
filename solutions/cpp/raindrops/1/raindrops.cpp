#include "raindrops.h"
#include <string>
namespace raindrops {
    std::string convert(int num){
        std::string res;
        if (num%3==0) res += "Pling";
        if (num%5==0) res += "Plang";
        if (num%7==0) res += "Plong";
        if (!res.empty()) return res;
        return std::to_string(num);
    }
}
