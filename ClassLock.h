#pragma once

template <class T>
class ClassLock
{
    friend T;

private:
    ClassLock() { std::cout << "Constructor ClassLock" << std::endl; };

public:
    //Note: make destructor virtual to make sure all the destrcutor is called.
    virtual ~ClassLock() { std::cout << "Destructor ClassLock" << std::endl; };
};

