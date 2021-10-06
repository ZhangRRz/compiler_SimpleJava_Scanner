#ifndef TABLE_H
#define TABLE_H

// tell c++ dont change func. name
#ifdef __cplusplus
extern "C"
{
#endif

    void create();
    int lookup(const char*);
    int insert(const char*);
    void dump();

#ifdef __cplusplus
}
#endif

#endif