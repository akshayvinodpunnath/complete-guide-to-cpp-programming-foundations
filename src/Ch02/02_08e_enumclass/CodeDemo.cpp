#include<iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script};
enum class menu_section {background, music, sound, controls, texture};

int main() {
    int sound = 8;
    asset_type asset_value;
    asset_value = asset_type::script;
    std::cout << "Asset Value: " << (int) asset_value << std::endl;
    return 0;
}