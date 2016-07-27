#ifndef __INCLUDED_L10N_TYPE_DEFINE_H_
#define __INCLUDED_L10N_TYPE_DEFINE_H_

#include <stdlib.h>
#include <string>
#include <vector>
#include <map>

class ResourceItem
{
public:
    ResourceItem(){};
    virtual ~ResourceItem(){}

    const std::string& GetID() const { return id_;}
    const std::string& GetValue() const { return value_;}

protected:
    std::string                 id_;
    std::string                 value_;
};

typedef std::map<std::string, ResourceItem*>    mapResourceItems;
typedef mapResourceItems::iterator              itResourceItem;
typedef mapResourceItems::const_iterator        citResourceItem;

class ResourceFile
{
public:
    ResourceFile(){}
    virtual ~ResourceFile()
    {
        for(itResourceItem it = resource_items_.begin(); it != resource_items_.end(); ++it)
        {
            delete it->second;
        }
        resource_items_.clear();
    }

    const ResourceItem* QueryItem(const std::string& id) const {
        citResourceItem it = resource_items_.find(id);
        if (resource_items_.end() == it) return NULL;
        return it->second;
    }

    virtual bool ParseFromFile(const std::string& file_name) = 0;

protected:
    mapResourceItems    resource_items_;
};

class WinResourceFile: public ResourceFile
{
public:
    virtual bool ParseFromFile(const std::string& file_name);
};

class MacResourceFile: public ResourceFile
{
public:
    virtual bool ParseFromFile(const std::string& file_name);
};

class IOSResourceFile: public ResourceFile
{
public:
    virtual bool ParseFromFile(const std::string& file_name);
};

class AndroidResourceFile: public ResourceFile
{
public:
    virtual bool ParseFromFile(const std::string& file_name);
};

#endif //__INCLUDED_L10N_TYPE_DEFINE_H_
