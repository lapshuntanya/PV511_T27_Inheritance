//
// Created by Tetiana Perederii on 23.04.2026.
//

#ifndef PV511_T27_INHERITANCE_PAIDLESSON_H
#define PV511_T27_INHERITANCE_PAIDLESSON_H

#include "Lesson.h"

class PaidLesson:public Lesson{ //#theme, #info, -home
    float price;
public:
    PaidLesson();
    PaidLesson(string theme, string info, string home, float price);
    ~PaidLesson();

    //+set, +get
    void setPrice(float price);
    float getPrice()const;

    //+showInfo()
    void showInfo()const; //override +showInfo()
};



#endif //PV511_T27_INHERITANCE_PAIDLESSON_H
