#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include <map>
#include <QApplication>
#include <QVector2D>


class InputManager
{
private:
    static bool captureMouse;
    static std::map<int, bool> active;
    static std::map<int, bool> pressed;
    static std::map<int, bool> released;
    static QVector2D previous;
    static QVector2D current;
    static QVector2D delta;


public:
    InputManager();

    static void Press(int keyCode);
    static void Resease(int keyCode);
    static void NextFrame();
    static bool Key (int keyCode);
    static bool KeyDown (int keyCode);
    static bool KeyUp (int keyCode);
    static int MouseDX ();
    static int MouseDY ();
    static QVector2D MousePosition();
    static void SampleMousePosition();
    static void SetCaptureMouse(bool capture);
};

#endif // INPUTMANAGER_H