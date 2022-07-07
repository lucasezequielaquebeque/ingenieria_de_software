#ifndef IFILESYSTEMCOMPONENT_H
#define IFILESYSTEMCOMPONENT_H

#include <iostream>
#include <vector>
#include <algorithm>

class IFileSystemComponent
{
    public:
        virtual ~IFileSystemComponent(){};
        virtual void list(int depth) = 0; //operation
        virtual void add(IFileSystemComponent* component) = 0;
        virtual void remove(IFileSystemComponent* component) = 0;
};
#endif //IFILESYSTEMCOMPONENT_H