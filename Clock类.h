#ifndef CLOCK类_H_INCLUDED
#define CLOCK类_H_INCLUDED

class Clock{
   public:
           // Clock(int newH, int newM, int newS); //析构函数。
            void setTime(int newH, int newM, int newS); //成员函数，设置时间。
            void showTime();  // 显示时间。
   private:
             int Hour, Minute, Second;
};


#endif // CLOCK类_H_INCLUDED
