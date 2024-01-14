#include <stdio.h>
#include<stdlib.h>
#include <string.h>

struct Person{
    char name[100];
    int height;
};

struct PersonHashTable{
    struct Person *table;
    int size;
};

struct PersonHashTable initHashTable(int size){
    struct Person *HashTable;
    HashTable = (struct PersonHashTable*)malloc(sizeof(struct PersonHashTable));
    HashTable->size=size;
    HashTable->table = (struct Person*)malloc(size*sizeof(struct Person));
    for(int i =0; i<size; i++){
        HashTable->table[i].height=-1;
    }
    return HashTable;
}

int hashfunction(char *name, int size){
    int hash = 0;
    while(*name){
        hash += *name;
        name++;
    }
    return hash%size;
}

void addtoHashTable(struct PersonHashTable *HashTable, char *name, int height){
    int index = hashfunction(name, HashTable->size);
    while(HashTable->table[index].height != -1){
        index = (index+1)%HashTable->size;
    }
    strcpy(HashTable->table[index].name, name);
    HashTable->table[index].height = height;
}

