#include <cstdint>
#include <iostream>
#include <array>
#include <string>
#include <format>
#include <print>

const char raw[] = {
    #embed "embed_text.txt" if_empty('M','i','s','s','i','n','g','\n')
    , '\0'
};
const std::string message(raw); // automatic length from NUL-terminated array


int main(){
    std::print("Message: '{}'\n", message);
}
 