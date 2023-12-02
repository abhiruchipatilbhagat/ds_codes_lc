#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a person
struct Person {
    char name[100];
    int height;
};

// Hash table to store the information about each person
struct PersonHashTable {
    struct Person *table; //array of people
    int size; //size of the hash table
};

// Initialize the hash table
struct PersonHashTable* initHashTable(int size) {
    struct PersonHashTable *hashTable = (struct PersonHashTable*)malloc(sizeof(struct PersonHashTable));
    hashTable->size = size;
    hashTable->table = (struct Person*)malloc(size * sizeof(struct Person));

    // Initialize heights to -1, indicating empty slots
    for (int i = 0; i < size; i++) {
        hashTable->table[i].height = -1;
    }

    return hashTable;
}

// Hash function to determine the index in the hash table
int hashFunction(char *name, int size) {
    int hash = 0;
    while (*name) {
        hash += *name;
        name++;
    }
    return hash % size;
}

// Add a person to the hash table
void addToHashTable(struct PersonHashTable *hashTable, char *name, int height) {
    int index = hashFunction(name, hashTable->size);

    // Handle collisions by linear probing
    while (hashTable->table[index].height != -1) {
        index = (index + 1) % hashTable->size;
    }

    // Store the person's information in the hash table
    strcpy(hashTable->table[index].name, name);
    hashTable->table[index].height = height;
}

// Comparator function for qsort to sort in descending order
int compare(const void *a, const void *b) {
    return ((struct Person*)b)->height - ((struct Person*)a)->height;
}

// Sort names based on heights in descending order
char** sortNamesByHeight(char** names, int* heights, int n) {
    // Initialize the hash table
    struct PersonHashTable *hashTable = initHashTable(n);
    
    // Populate the hash table with person information
    for (int i = 0; i < n; i++) {
        addToHashTable(hashTable, names[i], heights[i]);
    }

    // Sort the hash table based on heights in descending order
    qsort(hashTable->table, n, sizeof(struct Person), compare);

    // Copy the sorted names to a new array
    char** sortedNames = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        sortedNames[i] = hashTable->table[i].name;
    }

    return sortedNames;
}

int main() {
    // Example input
    char* names[] = {"Mary", "John", "Emma"};
    int heights[] = {180, 165, 170};
    int n = sizeof(names) / sizeof(names[0]);

    // Get the sorted names
    char** sortedNames = sortNamesByHeight(names, heights, n);

    // Print the result
    printf("Sorted Names: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", sortedNames[i]);
    }

    // Free allocated memory
    free(sortedNames);

    return 0;
}
