#include "table.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> table;

void create(){
    table.clear();
}
int lookup(const char* ele){
    auto index = find(table.begin(),table.end(),ele);
    if(index == table.end()){
        return -1;
    }else{
        return index-table.begin();
    }
}
int insert(const char* ele){
    auto result = find(table.begin(),table.end(),ele);
    if(result == table.end()){
        table.push_back(ele);
        return table.size();
    }
    return result-table.begin();
}
void dump(){
    cout << "The symbol table contains:" << endl;
    for (int i = 0; i < table.size();i++){
        cout << table[i] << endl;
    }
}