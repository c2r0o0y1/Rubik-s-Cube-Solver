//
// Created by Chhandak Roy on 7/23/24.
//

#include <vector>
#include <cassert>

#ifndef NIBBLEARRAY_H
#define NIBBLEARRAY_H

using namespace std;

class NibbleArray {
    size_t size;
    vector<uint8_t> arr;

public:
    NibbleArray(const size_t size, const uint8_t val = 0xFF);

    uint8_t get(const size_t pos) const;

    void set(const size_t pos, const uint8_t val);

    unsigned char *data();

    const unsigned char *data() const;

    size_t storageSize() const;

    void inflate(vector<uint8_t> &dest) const;

    void reset(const uint8_t val = 0xFF);

};

#endif //NIBBLEARRAY_H
