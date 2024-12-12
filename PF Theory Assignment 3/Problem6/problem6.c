#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    float latitude;
    float longitude;
    float soilHealth;
    float moistureLevel;
} Field;

typedef struct {
    char* cropType;
    char* growthStage;
    float expectedYield;
} Crop;

typedef struct {
    float temperature;
    float rainfall;
    float windSpeed;
} WeatherForecast;

typedef struct {
    char* equipmentType;
    int operationalStatus;
    float fuelLevel;
    char* activitySchedule;
} Equipment;

typedef struct {
    float nutrientLevel;
    float pHLevel;
    int pestActivity;
} Sensor;

typedef struct {
    Field* fields;
    int numFields;
    float aggregateYield;
    float resourceDistribution;
    char* emergencyResponsePlan;
} RegionalHub;

typedef struct {
    RegionalHub* regionalHubs;
    int numHubs;
    float totalYieldPrediction;
} CentralAnalyticsServer;

Field* createField(float latitude, float longitude, float soilHealth, float moistureLevel) {
    Field* field = (Field*)malloc(sizeof(Field));
    if (field == NULL) {
        fprintf(stderr, "Memory allocation failed for Field\n");
        exit(1);
    }
    field->latitude = latitude;
    field->longitude = longitude;
    field->soilHealth = soilHealth;
    field->moistureLevel = moistureLevel;
    return field;
}

Crop* createCrop(const char* cropType, const char* growthStage, float expectedYield) {
    Crop* crop = (Crop*)malloc(sizeof(Crop));
    if (crop == NULL) {
        fprintf(stderr, "Memory allocation failed for Crop\n");
        exit(1);
    }
    crop->cropType = strdup(cropType);
    crop->growthStage = strdup(growthStage);
    crop->expectedYield = expectedYield;
    return crop;
}

WeatherForecast* createWeatherForecast(float temperature, float rainfall, float windSpeed) {
    WeatherForecast* weather = (WeatherForecast*)malloc(sizeof(WeatherForecast));
    if (weather == NULL) {
        fprintf(stderr, "Memory allocation failed for WeatherForecast\n");
        exit(1);
    }
    weather->temperature = temperature;
    weather->rainfall = rainfall;
    weather->windSpeed = windSpeed;
    return weather;
}

Equipment* createEquipment(const char* equipmentType, int operationalStatus, float fuelLevel, const char* activitySchedule) {
    Equipment* equipment = (Equipment*)malloc(sizeof(Equipment));
    if (equipment == NULL) {
        fprintf(stderr, "Memory allocation failed for Equipment\n");
        exit(1);
    }
    equipment->equipmentType = strdup(equipmentType);
    equipment->operationalStatus = operationalStatus;
    equipment->fuelLevel = fuelLevel;
    equipment->activitySchedule = strdup(activitySchedule);
    return equipment;
}

Sensor* createSensor(float nutrientLevel, float pHLevel, int pestActivity) {
    Sensor* sensor = (Sensor*)malloc(sizeof(Sensor));
    if (sensor == NULL) {
        fprintf(stderr, "Memory allocation failed for Sensor\n");
        exit(1);
    }
    sensor->nutrientLevel = nutrientLevel;
    sensor->pHLevel = pHLevel;
    sensor->pestActivity = pestActivity;
    return sensor;
}

RegionalHub* createRegionalHub(int numFields, float aggregateYield, float resourceDistribution, const char* emergencyResponsePlan) {
    RegionalHub* hub = (RegionalHub*)malloc(sizeof(RegionalHub));
    if (hub == NULL) {
        fprintf(stderr, "Memory allocation failed for RegionalHub\n");
        exit(1);
    }
    hub->fields = (Field*)malloc(numFields * sizeof(Field));
    if (hub->fields == NULL) {
        fprintf(stderr, "Memory allocation failed for fields in RegionalHub\n");
        exit(1);
    }
    hub->numFields = numFields;
    hub->aggregateYield = aggregateYield;
    hub->resourceDistribution = resourceDistribution;
    hub->emergencyResponsePlan = strdup(emergencyResponsePlan);
    return hub;
}

CentralAnalyticsServer* createCentralAnalyticsServer(int numHubs, float totalYieldPrediction) {
    CentralAnalyticsServer* server = (CentralAnalyticsServer*)malloc(sizeof(CentralAnalyticsServer));
    if (server == NULL) {
        fprintf(stderr, "Memory allocation failed for CentralAnalyticsServer\n");
        exit(1);
    }
    server->regionalHubs = (RegionalHub*)malloc(numHubs * sizeof(RegionalHub));
    if (server->regionalHubs == NULL) {
        fprintf(stderr, "Memory allocation failed for regional hubs in CentralAnalyticsServer\n");
        exit(1);
    }
    server->numHubs = numHubs;
    server->totalYieldPrediction = totalYieldPrediction;
    return server;
}

void freeMemory(Field* field, Crop* crop, WeatherForecast* weather, Equipment* equipment, Sensor* sensor, RegionalHub* hub, CentralAnalyticsServer* server) {
    free(field);
    free(crop->cropType);
    free(crop->growthStage);
    free(crop);
    free(weather);
    free(equipment->equipmentType);
    free(equipment->activitySchedule);
    free(equipment);
    free(sensor);
    free(hub->fields);
    free(hub->emergencyResponsePlan);
    free(hub);
    free(server->regionalHubs);
    free(server);
}

int main() {
    Field* field = createField(45.1234, -75.5678, 8.5, 35.2);
    Crop* crop = createCrop("Wheat", "Mature", 4.5);
    WeatherForecast* weather = createWeatherForecast(22.5, 50.0, 15.0);
    Equipment* equipment = createEquipment("Autonomous Tractor", 1, 75.0, "Plowing");
    Sensor* sensor = createSensor(7.2, 6.5, 3);
    
    RegionalHub* hub = createRegionalHub(1, 4.5, 80.0, "Evacuation Plan for Flooding");
    CentralAnalyticsServer* server = createCentralAnalyticsServer(1, 100.0);
    
    printf("Field GPS Coordinates: (%f, %f)\n", field->latitude, field->longitude);
    printf("Soil Health: %f, Moisture Level: %f\n", field->soilHealth, field->moistureLevel);
    printf("Crop Type: %s, Growth Stage: %s, Expected Yield: %f tons\n", crop->cropType, crop->growthStage, crop->expectedYield);
    printf("Weather Forecast - Temperature: %f, Rainfall: %f mm, Wind Speed: %f km/h\n", weather->temperature, weather->rainfall, weather->windSpeed);
    printf("Equipment: %s, Operational Status: %d, Fuel Level: %f, Activity: %s\n", equipment->equipmentType, equipment->operationalStatus, equipment->fuelLevel, equipment->activitySchedule);
    printf("Regional Hub - Aggregate Yield: %f, Resource Distribution: %f, Emergency Response Plan: %s\n", hub->aggregateYield, hub->resourceDistribution, hub->emergencyResponsePlan);
    printf("Total Yield Prediction in Central Server: %f\n", server->totalYieldPrediction);
    
    freeMemory(field, crop, weather, equipment, sensor, hub, server);
    
    return 0;
}
