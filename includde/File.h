#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <vector>
#include "../includde/IFileSystemComponent.h"

class File : public IFileSystemComponent
{
    private:
        std::string m_nodeName;
        std::vector<IFileSystemComponent*> m_children;

    public:
        File(std::string nodeName);
        virtual ~File();
        void list(int depth);

        void add(IFileSystemComponent* component);

        void remove(IFileSystemComponent* component);
};


#endif //FILE_H