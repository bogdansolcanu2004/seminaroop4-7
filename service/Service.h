//
// Created by Gabriel Nasui on 5/5/2025.
//

#ifndef SERVICE_H
#define SERVICE_H
#include <iostream>

#include "../repo/MediaItemRepo.h"
#include <string>


class Service {
    private:
    MediaItemRepo &repo;
    public:
    Service(MediaItemRepo &repo) : repo(repo){}

    void add(std::string type,std::string title, unsigned int duration,std::string url,
        std::string artist = "",std::string director = "",int numberOfActors = 0)
    {
        MediaItem *item;
        if (type == "Song") {
            item = new Song(title,duration, url, artist);
            std::cout << "Created song!" << '\n';
        } else if (type == "Movie") {
            item = new Movie(title,duration, url, director, numberOfActors);
            std::cout << "Created movie!" << '\n';
        }
        else throw std::invalid_argument("Invalid type");
    }
};



#endif //SERVICE_H
