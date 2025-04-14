#include <iostream>
#include "MediaItem.h"
#include "Repository.h"
#include <fstream>

using namespace std;

int main() {
    Repository r;
    ifstream f{"../media_entries.csv"};
    cout<<f.is_open();
    return 0;
}