#ifndef EXCEPTIONCOURSE_H
#define EXCEPTIONCOURSE_H
#include "MyException.h"
#include <iostream>
using namespace std;

class ExceptionCourse : public MyException
{
    public:
        ExceptionCourse();
        virtual ~ExceptionCourse();
        virtual const char* what()const{return message;}
        void print(){cout<<"����ĳɼ����Ϸ�"<<endl;}
    protected:
    private:
};

#endif // EXCEPTIONCOURSE_H
