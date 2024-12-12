#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* title;
    float rating;
    int runtime;
    char* encodingFormat;
} ContentMetadata;

typedef struct {
    float resolution;
    int playbackHistory;
    float bandwidthUsage;
} DevicePreference;

typedef struct {
    float* engagementScores;
} UserProfile;

UserProfile* createUserProfile(int numCategories) {
    UserProfile* user = (UserProfile*)malloc(sizeof(UserProfile));
    if (!user) {
        fprintf(stderr, "Memory allocation failed for user profile\n");
        exit(1);
    }
    user->engagementScores = (float*)calloc(numCategories, sizeof(float));
    if (!user->engagementScores) {
        fprintf(stderr, "Memory allocation failed for engagement scores\n");
        exit(1);
    }
    return user;
}

ContentMetadata*** createContentMetadataMatrix(int numCategories, int numContentsPerCategory) {
    ContentMetadata*** matrix = (ContentMetadata***)malloc(numCategories * sizeof(ContentMetadata**));
    if (!matrix) {
        fprintf(stderr, "Memory allocation failed for content metadata matrix\n");
        exit(1);
    }
    for (int i = 0; i < numCategories; i++) {
        matrix[i] = (ContentMetadata**)malloc(numContentsPerCategory * sizeof(ContentMetadata*));
        if (!matrix[i]) {
            fprintf(stderr, "Memory allocation failed for category %d in content metadata matrix\n", i);
            exit(1);
        }
        for (int j = 0; j < numContentsPerCategory; j++) {
            matrix[i][j] = (ContentMetadata*)malloc(sizeof(ContentMetadata));
            if (!matrix[i][j]) {
                fprintf(stderr, "Memory allocation failed for content %d in category %d\n", j, i);
                exit(1);
            }
        }
    }
    return matrix;
}

DevicePreference*** createDevicePreferenceMatrix(int numUsers, int numDevices) {
    DevicePreference*** matrix = (DevicePreference***)malloc(numUsers * sizeof(DevicePreference**));
    if (!matrix) {
        fprintf(stderr, "Memory allocation failed for device preference matrix\n");
        exit(1);
    }
    for (int i = 0; i < numUsers; i++) {
        matrix[i] = (DevicePreference**)malloc(numDevices * sizeof(DevicePreference*));
        if (!matrix[i]) {
            fprintf(stderr, "Memory allocation failed for user %d in device preference matrix\n", i);
            exit(1);
        }
        for (int j = 0; j < numDevices; j++) {
            matrix[i][j] = (DevicePreference*)malloc(sizeof(DevicePreference));
            if (!matrix[i][j]) {
                fprintf(stderr, "Memory allocation failed for device %d for user %d\n", j, i);
                exit(1);
            }
        }
    }
    return matrix;
}

void updateEngagementScore(UserProfile** engagementMatrix, int userIndex, int categoryIndex, float score) {
    engagementMatrix[userIndex][categoryIndex]->engagementScores[categoryIndex] = score;
}

void printContentMetadata(ContentMetadata*** matrix, int numCategories, int numContentsPerCategory) {
    for (int i = 0; i < numCategories; i++) {
        for (int j = 0; j < numContentsPerCategory; j++) {
            printf("Category %d, Content %d: Title: %s, Rating: %.1f, Runtime: %d mins, Encoding: %s\n",
                   i, j, matrix[i][j]->title, matrix[i][j]->rating, matrix[i][j]->runtime, matrix[i][j]->encodingFormat);
        }
    }
}

void freeMemory(UserProfile** engagementMatrix, int numUsers, int numCategories, ContentMetadata*** contentMatrix, int numCategories, int numContentsPerCategory, DevicePreference*** deviceMatrix, int numUsers, int numDevices) {
    for (int i = 0; i < numUsers; i++) {
        free(engagementMatrix[i]);
    }
    free(engagementMatrix);

    for (int i = 0; i < numCategories; i++) {
        for (int j = 0; j < numContentsPerCategory; j++) {
            free(contentMatrix[i][j]);
        }
        free(contentMatrix[i]);
    }
    free(contentMatrix);

    for (int i = 0; i < numUsers; i++) {
        for (int j = 0; j < numDevices; j++) {
            free(deviceMatrix[i][j]);
        }
        free(deviceMatrix[i]);
    }
    free(deviceMatrix);
}

int main() {
    int numUsers = 3;
    int numCategories = 3;
    int numContentsPerCategory = 2;
    int numDevices = 2;

    UserProfile** engagementMatrix = (UserProfile**)malloc(numUsers * sizeof(UserProfile*));
    if (!engagementMatrix) {
        fprintf(stderr, "Memory allocation failed for engagementMatrix\n");
        exit(1);
    }
    for (int i = 0; i < numUsers; i++) {
        engagementMatrix[i] = createUserProfile(numCategories);
    }

    ContentMetadata*** contentMetadataMatrix = createContentMetadataMatrix(numCategories, numContentsPerCategory);
    contentMetadataMatrix[0][0]->title = "Action Movie 1";
    contentMetadataMatrix[0][0]->rating = 8.5;
    contentMetadataMatrix[0][0]->runtime = 120;
    contentMetadataMatrix[0][0]->encodingFormat = "H.264";

    DevicePreference*** deviceMatrix = createDevicePreferenceMatrix(numUsers, numDevices);
    deviceMatrix[0][0]->resolution = 1080;
    deviceMatrix[0][0]->playbackHistory = 50;
    deviceMatrix[0][0]->bandwidthUsage = 30.0;

    updateEngagementScore(engagementMatrix, 0, 0, 9.0);

    printContentMetadata(contentMetadataMatrix, numCategories, numContentsPerCategory);

    freeMemory(engagementMatrix, numUsers, numCategories, contentMetadataMatrix, numCategories, numContentsPerCategory, deviceMatrix, numUsers, numDevices);

    return 0;
}
