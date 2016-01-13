#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H


class MyException
{
    public:
        MyException();
        virtual ~MyException();
        virtual const char* what()const{return message;}
    protected:
        const char* message;
    private:
};

#endif // MYEXCEPTION_H
