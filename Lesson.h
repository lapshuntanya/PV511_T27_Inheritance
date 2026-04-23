//
// Created by Tetiana Perederii on 23.04.2026.
//

#ifndef PV511_T27_INHERITANCE_LESSON_H
#define PV511_T27_INHERITANCE_LESSON_H

#include <string>
#include <iostream>
using namespace std;

class Lesson {
protected:
    string theme;
    string info;
private:
    string home;
public:
    Lesson();
    Lesson(string theme, string info, string home);
    ~Lesson();

    void setTheme(string theme);
    void setInfo(string info);
    void setHome(string home);

    string getTheme()const;
    string getInfo()const;
    string getHome()const;

    void showInfo()const;
};



#endif //PV511_T27_INHERITANCE_LESSON_H
