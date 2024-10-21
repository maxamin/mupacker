#ifndef _PATTERNFIND_H
#define _PATTERNFIND_H

//returns: offset to data when found, -1 when not found
size_t patternfind(
    unsigned char* data, //data
    size_t size, //size of data
    const char* pattern //pattern to search
);

//returns: nothing
void patternwrite(
    unsigned char* data, //data
    size_t size, //size of data
    const char* pattern //pattern to write
);

//returns: true on success, false on failure
bool patternsnr(
    unsigned char* data, //data
    size_t size, //size of data
    const char* searchpattern, //pattern to search
    const char* replacepattern //pattern to write
);

#endif // _PATTERNFIND_H
