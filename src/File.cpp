#include "../includde/File.h">


File::File(std::string nodeName)
        {
            m_nodeName = nodeName;
        }

File::~File(){}

void File::list(int depth)//operation
    {
        std::string newStr(depth, '-');
        std::cout << newStr << m_nodeName << " depth: " << depth << std::endl;
        for(std::vector<IFileSystemComponent*>::const_iterator it = m_children.begin(); it != m_children.end(); ++it)
        {
            if(*it != 0)
            {
                (*it)->list(depth + 1);
            }
        }
    }

void File::add(IFileSystemComponent* component)
    {
        m_children.push_back(component);
    }

void File::remove(IFileSystemComponent* component)
    {
        m_children.erase(std::remove(m_children.begin(), m_children.end(), component), m_children.end());
    }
