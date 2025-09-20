#include <SDL.h>
#include <SDL_mixer.h>
#include <iostream>
#include <conio.h>
#include <map>
#include <string>
#include <windows.h>
#undef main
using namespace std;


class White_insturmental {
public:

    virtual void piano() {
        cout << "\x1b[48;2;255;255;255m"  // Set background to white
            << "\x1b[38;2;0;0;0m"        // Set text to black
            << "     " << "  " << "    " << "  " << "    " << "  " << "    " << "  " << "    " << "  " << "    " << "  " << "    " << "  " << "    " << "  " << "    "
            << "  " << "    " << "  " << "    " << "  " << "    " << "  " << "    " << "  " << "    " << "  " << "    " << "  " << "    " << "  " << "    " << "  " << "    " << "  " << "    "
            << "\n     " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "\n     " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "\n     " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "\n  A " << " |" << "  S " << " |" << "  D " << " |" << "  F " << " |"
            << "  G " << " |" << "  H " << " |" << "  J " << " |" << "  K " << " |"
            << "  L " << " |" << "  Z " << " |" << "  X " << " |" << "  C " << " |" << "  V " << " |" << "  B " << " |" << "  N "
            << " |" << "  M " << " |" << "  T " << " |" << "  Y " << " |" << "  I  "
            << "\n     " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "\n     " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "\n     " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "\n     " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    " << "| " << "    "
            << "\x1b[0m" << endl;
    }

};
class Grey_insturmental : public White_insturmental {
public:
    void piano() override {
        cout << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "            " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "           " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "          " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\n\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "            " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "           " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "          " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\n\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "            " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "           " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "          " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\n\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "            " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "           " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "          " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\n\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "            " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "           " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "          " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\n\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "            " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "           " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "          " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\n\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "            " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "           " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "          " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\n\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "            " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "           " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "          " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;0;0;0m" << "\x1b[38;2;0;0;0m" << "      " << "\x1b[0m"
            << "\x1b[48;2;255;255;255m" << "\x1b[38;2;0;0;0m" << "     " << "\x1b[0m"


            << "\x1b[0m" << endl;

    }

};
class Character {
public:
    void OK() {

        cout << "\033[1;31m";
        cout << R"( 
                                                          ______
                                                       .-"      "-.
                                                      /            \
                                                     |              |
                                                     |,  .-.  .-.  ,|
                                                     | )(/  \)( |
                                                     |/     /\     \|
                                           (@_       (_     ^^     _)
                                      _     ) \\|IIIIII|/_________________________
                                     ()@8@8{}<|-\IIIIII/-|>_______________________/ 
                                            )_/        \          /
                                           (@            -------- 
     )";


      cout << "\033[0m";
    };
    
};
class Tones : public Character {
public:
    int music() {
        // تهيئة SDL
        if (SDL_Init(SDL_INIT_AUDIO) != 0) {
            cout << "Error: " << SDL_GetError() << endl;
            return -1;
        }

        // تهيئة SDL_mixer
        if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
            cout << "Mixer Error: " << Mix_GetError() << endl;
            return -1;
        }
        Mix_AllocateChannels(32);
        // link to files
        map<char, string> keyToFile = {
            {'A', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Ab3.wav)"},
            {'S', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\C7.wav)"},
            {'D', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\D7.wav)"},
            {'F', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Db7.wav)"},
            {'G', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\C5.wav)"},
            {'H', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Db7.wav)"},
            {'J', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Eb7.wav)"},
            {'K', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Db4.wav)"},
            {'L', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\D7.wav)"},
            {'Q', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\B6.wav)"},
            {'W', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\C7.wav)"},
            {'E', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Db7.wav)"},
            {'R', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Db4.wav)"},
            {'T', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\E6.wav)"},
            {'Y', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Gb6.wav)"},
            {'U', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\C5.wav)"},
            {'I', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Db7.wav)"},
            {'O', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\E1.wav)"},
            {'P', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\E7.wav)"},
            {'Z', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Eb3.wav)"},
            {'X', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Eb7.wav)"},
            {'C', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\F7.wav)"},
            {'V', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Db4.wav)"},
            {'B', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\E6.wav)"},
            {'N', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\C5.wav)"},
            {'M', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\D7.wav)"},
            {'N', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Eb3.wav)"},
            {'O', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\E1.wav)"},
            {'P', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\E7.wav)"},
            {'Q', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Eb7.wav)"},
            {'R', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Gb6.wav)"},
            {'S', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Ab3.wav)"},
            {'T', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\C5.wav)"},
            {'U', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Db4.wav)"},
            {'V', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Ab6.wav)"},
            {'W', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Ab6.wav)"},
            {'X', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\E6.wav)"},
            {'Y', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Eb7.wav)"},
            {'Z', R"(C:\Users\malak abd alqwy\source\repos\set_SDL\x64\Debug\Db4.wav)"}
        };

       
        map<char, Mix_Chunk*> sounds;
        for (auto& pair : keyToFile) {
            Mix_Chunk* chunk = Mix_LoadWAV(pair.second.c_str());
            if (!chunk) {
                cout << "Failed to load " << pair.second << ": " << Mix_GetError() << endl;
            }
            else {
                sounds[pair.first] = chunk;
            }
        }

        cout << "Press \'esc\' to leave";
        OK();
        // Run loop
        bool running = true;
        while (running) {
            if (_kbhit()) {
                char c = _getch();
                if (c == 27) { // ESC
                    running = false;
                }
                else {
                    c = toupper(c);
                    if (sounds.count(c)) {
                        Mix_PlayChannel(-1, sounds[c], 0);
                    }
                }
            }
            SDL_Delay(1);
        }

        // Deconstracture
        for (auto& s : sounds) {
            Mix_FreeChunk(s.second);
        }
        Mix_CloseAudio();
        SDL_Quit();

        return 0;
    }
};


int main() {

    White_insturmental* myMusic = new White_insturmental;
    White_insturmental* myGrey = new Grey_insturmental;
    Tones* mytone = new Tones;
    myGrey->piano();
    myMusic->piano();
    mytone->music();
    

    
};