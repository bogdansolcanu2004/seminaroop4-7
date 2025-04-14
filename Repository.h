#ifndef REPOSITORY_H
#define REPOSITORY_H
#include<vector>
#include "MediaItem.h"
using std::vector;

class Repository {
protected:
     vector<MediaItem*> items;
public:
    virtual ~Repository();
    Repository() = default;
     Repository(const Repository&)=delete;
     Repository& operator=(const Repository&)=delete;
     void add(MediaItem* media);
     vector<MediaItem*>& getall();
};



#endif //REPOSITORY_H
