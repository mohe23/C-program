#ifndef CLOCK��_H_INCLUDED
#define CLOCK��_H_INCLUDED

class Clock{
   public:
           // Clock(int newH, int newM, int newS); //����������
            void setTime(int newH, int newM, int newS); //��Ա����������ʱ�䡣
            void showTime();  // ��ʾʱ�䡣
   private:
             int Hour, Minute, Second;
};


#endif // CLOCK��_H_INCLUDED
