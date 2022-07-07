#include <iostream>
#include <vector>
#include <algorithm>
#include "./includde/IFileSystemComponent.h"
#include "./includde/Folder.h"
#include "./includde/File.h"


int main()
{
    IFileSystemComponent* folder_01 = new Folder("folder_01");

    IFileSystemComponent* folder_02 = new Folder("folder_02");
    folder_01->add(folder_02);

    IFileSystemComponent* folder_03 = new Folder("folder_03");
    IFileSystemComponent* fileA = new File("file A");
    folder_03->add(fileA);
    folder_03->add(new File("file B"));
    folder_02->add(folder_03);

    
    folder_01->list(1);

    delete folder_03;
    delete folder_02;
    delete folder_01;
    return 0;
}
