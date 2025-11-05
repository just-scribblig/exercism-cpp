#include <algorithm>
#include <string>
#include "reverse_string.h"
using namespace std;
namespace reverse_string {
    string reverse_string(string str){
        string reversed;
        int len = str.size();
        for(int i=len-1; i>-1; i--){
            reversed += str[i];
        } return reversed;
    }
}