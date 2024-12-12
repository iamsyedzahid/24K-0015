#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char** supplies;
    int numSupplies;
} SpeciesInventory;

void initializeInventory(SpeciesInventory** speciesSupplies, int numSpecies) {
    *speciesSupplies = (SpeciesInventory*)malloc(numSpecies * sizeof(SpeciesInventory));
    for (int i = 0; i < numSpecies; i++) {
        (*speciesSupplies)[i].supplies = NULL;
        (*speciesSupplies)[i].numSupplies = 0;
    }
}

void addSupply(SpeciesInventory* species, const char* supply) {
    species->supplies = (char**)realloc(species->supplies, (species->numSupplies + 1) * sizeof(char*));
    species->supplies[species->numSupplies] = strdup(supply);
    species->numSupplies++;
}

void updateSupply(SpeciesInventory* species, int index, const char* newSupply) {
    if (index >= 0 && index < species->numSupplies) {
        free(species->supplies[index]);
        species->supplies[index] = strdup(newSupply);
    } else {
        printf("Invalid supply index!\n");
    }
}

void removeSpecies(SpeciesInventory* speciesSupplies, int* numSpecies, int speciesIndex) {
    if (speciesIndex >= 0 && speciesIndex < *numSpecies) {
        for (int i = 0; i < speciesSupplies[speciesIndex].numSupplies; i++) {
            free(speciesSupplies[speciesIndex].supplies[i]);
        }
        free(speciesSupplies[speciesIndex].supplies);

        for (int i = speciesIndex; i < *numSpecies - 1; i++) {
            speciesSupplies[i] = speciesSupplies[i + 1];
        }

        (*numSpecies)--;
        speciesSupplies = (SpeciesInventory*)realloc(speciesSupplies, (*numSpecies) * sizeof(SpeciesInventory));
    } else {
        printf("Invalid species index!\n");
    }
}

void displayInventory(SpeciesInventory* speciesSupplies, int numSpecies) {
    for (int i = 0; i < numSpecies; i++) {
        printf("Species %d:\n", i + 1);
        for (int j = 0; j < speciesSupplies[i].numSupplies; j++) {
            printf("  %s\n", speciesSupplies[i].supplies[j]);
        }
        printf("\n");
    }
}

int main() {
    SpeciesInventory* speciesSupplies;
    int numSpecies = 3;
    initializeInventory(&speciesSupplies, numSpecies);

    addSupply(&speciesSupplies[0], "Food");
    addSupply(&speciesSupplies[0], "Leash");

    addSupply(&speciesSupplies[1], "Food");
    addSupply(&speciesSupplies[1], "Litter Box");

    addSupply(&speciesSupplies[2], "Cage");
    addSupply(&speciesSupplies[2], "Food");

    printf("Initial Inventory:\n");
    displayInventory(speciesSupplies, numSpecies);

    updateSupply(&speciesSupplies[0], 1, "Collar");

    printf("Inventory after updating supply:\n");
    displayInventory(speciesSupplies, numSpecies);

    removeSpecies(speciesSupplies, &numSpecies, 1);

    printf("Inventory after removing a species:\n");
    displayInventory(speciesSupplies, numSpecies);

    for (int i = 0; i < numSpecies; i++) {
        for (int j = 0; j < speciesSupplies[i].numSupplies; j++) {
            free(speciesSupplies[i].supplies[j]);
        }
        free(speciesSupplies[i].supplies);
    }
    free(speciesSupplies);

    return 0;
}
