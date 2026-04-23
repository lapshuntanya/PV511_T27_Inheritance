//
// Created by Tetiana Perederii on 23.04.2026.
//

#include "PaidLesson.h"


PaidLesson::PaidLesson() {
 //Lesson(); "empty",  "empty",  "empty"
  price = 0;
  cout << "PaidLesson(): " << theme << endl;
}

 PaidLesson::PaidLesson(string theme, string info, string home, float price)
  :Lesson(theme, info, home)
{
  //Lesson(); "empty",  "empty",  "empty"
  /*this->theme = theme;
  this->info = info;
  setHome(home);*/

  this->price = price;
  cout << "PaidLesson(t, i, h, p): " << theme << endl;
}

 PaidLesson::~PaidLesson() {
  cout << "~PaidLesson(): " << theme << endl;
}

void PaidLesson::setPrice(float price) {
  this->price = price;
}

float PaidLesson::getPrice() const {
  return price;
}

void PaidLesson::showInfo() const {
  cout << "Price: " << price << endl;
  Lesson::showInfo();
  // cout << "Theme: " << theme << endl;
  // cout << "Info:  " << info << endl;
  // cout << "Home:  " << getHome() << endl << endl;
}