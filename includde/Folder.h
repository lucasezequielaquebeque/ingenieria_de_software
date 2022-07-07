#ifndef FOLDER_H
#define FOLDER_H

#include <iostream>
#include<vector>
#include "../includde/IFileSystemComponent.h"

class Folder : public IFileSystemComponent
{
    private:
        std::string m_nodeName;
        std::vector<IFileSystemComponent*> m_children;

    public:
        Folder(std::string nodeName);
        virtual ~Folder();
        void list(int depth);
        void add(IFileSystemComponent* component);
        void remove(IFileSystemComponent* component);
};

#endif //FOLDER_H