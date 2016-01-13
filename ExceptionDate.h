#ifndef EXCEPTIONDATE_H
#define EXCEPTIONDATE_H
#include "MyException.h"
#include <iostream>
using namespace std;

class ExceptionDate : public MyException
{
    public:
        ExceptionDate();
        virtual ~ExceptionDate();
        virtual const char* what()const{return message;}
        void print(){cout<<"输入的日期不合法"<<endl;}
    protected:
    private:
};

#endif // EXCEPTIONDATE_H
