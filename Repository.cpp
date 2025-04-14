#include "Repository.h"

Repository::~Repository() {
    for(MediaItem* i:items) {
        delete i;
    }
}

void Repository::add(MediaItem *media) {
    items.push_back(media);
}

vector<MediaItem *> & Repository::getall() {
    return items;
}
