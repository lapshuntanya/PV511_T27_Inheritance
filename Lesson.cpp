//
// Created by Tetiana Perederii on 23.04.2026.
//

#include "Lesson.h"

Lesson::Lesson() {
    theme ="empty";
    info ="empty";
    home ="empty";

    cout << "Lesson(): " << theme << endl;
}

Lesson::Lesson(string theme, string info, string home) {
    this->theme = theme;
    this->info = info;
    this->home = home;

    cout << "Lesson(t, i, h): " << theme << endl;
}

Lesson::~Lesson() {
    cout << "~Lesson(): " << theme << endl;
}

void Lesson::setTheme(string theme) {
    this->theme = theme;
}

void Lesson::setInfo(string info) {
    this->info = info;
}

void Lesson::setHome(string home) {
    this->home = home;
}

string Lesson::getTheme() const {
    return theme;
}

string Lesson::getInfo() const {
    return info;
}

string Lesson::getHome() const {
    return home;
}

void Lesson::showInfo() const {
    cout << "Theme: " << theme << endl;
    cout << "Info:  " << info << endl;
    cout << "Home:  " << home << endl << endl;
}
