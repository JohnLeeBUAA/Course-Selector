#ifndef EXCEPTIONSTUDENT_H
#define EXCEPTIONSTUDENT_H
#include "MyException.h"
#include <iostream>
using namespace std;


class ExceptionStudent : public MyException
{
    public:
        ExceptionStudent();
        virtual ~ExceptionStudent();
        virtual const char* what()const{return message;}
        void print(){cout<<"下标越界"<<endl;}
    protected:
    private:
};

#endif // EXCEPTIONSTUDENT_H
