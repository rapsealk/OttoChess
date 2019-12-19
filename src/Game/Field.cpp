// Copyright (c) 2019 rapsealk

#include "OttoChess/include/Game/Field.hpp"

#include <iostream>

OttoChess::Game::Field::Field() {

}

void OttoChess::Game::Field::Draw() {
    std::cout << "                 _______" << std::endl;
    std::cout << "                / _____ \\" << std::endl;
    std::cout << "          _____/ /     \\ \\_____" << std::endl;
    std::cout << "         / _____/  311  \\_____ \\" << std::endl;
    std::cout << "   _____/ /     \\       /     \\ \\_____" << std::endl;
    std::cout << "  / _____/  221  \\_____/  412  \\_____ \\" << std::endl;
    std::cout << " / /     \\       /     \\       /     \\ \\" << std::endl;
    std::cout << "/ /  131  \\_____/  322  \\_____/  513  \\ \\" << std::endl;
    std::cout << "\\ \\       /     \\       /     \\       / /" << std::endl;
    std::cout << " \\ \\_____/  232  \\_____/  423  \\_____/ /" << std::endl;
    std::cout << " / /     \\       /     \\       /     \\ \\" << std::endl;
    std::cout << "/ /  142  \\_____/  333  \\_____/  524  \\ \\" << std::endl;
    std::cout << "\\ \\       /     \\       /     \\       / /" << std::endl;
    std::cout << " \\ \\_____/  243  \\_____/  434  \\_____/ /" << std::endl;
    std::cout << " / /     \\       /     \\       /     \\ \\" << std::endl;
    std::cout << "/ /  153  \\_____/  344  \\_____/  535  \\ \\" << std::endl;
    std::cout << "\\ \\       /     \\       /     \\       / /" << std::endl;
    std::cout << " \\ \\_____/  254  \\_____/  445  \\_____/ /" << std::endl;
    std::cout << "  \\_____ \\       /     \\       / _____/" << std::endl;
    std::cout << "        \\ \\_____/  355  \\_____/ /" << std::endl;
    std::cout << "         \\_____ \\       / _____/" << std::endl;
    std::cout << "               \\ \\_____/ /" << std::endl;
    std::cout << "                \\_______/" << std::endl;
}