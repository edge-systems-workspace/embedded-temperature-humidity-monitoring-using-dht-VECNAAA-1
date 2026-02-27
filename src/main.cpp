#include <Arduino.h>
#include <DHT.h>

/**
 * @file main.ino
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author Saurav Gautam
 * @date 2026-02-27
 */

// TODO 1:
// Define the DHT data pin (Use digital pin 2)
#define DHTPIN 2

// TODO 2:
// Define the DHT sensor type (DHT11)
// #define DHTTYPE DHT11

// TODO 3:
// Create a DHT object using the defined pin and sensor type
// DHT dht(DHTPIN, DHTTYPE);

void setup() {

    // TODO 4:
    // Initialize Serial communication (9600 baud rate)
    // Serial.begin(9600);

    // TODO 5:
    // Initialize the DHT sensor
    // dht.begin();

    // TODO 6:
    // Print a system initialization message
    // Serial.println("==================================");
    // Serial.println(" DHT11 Monitoring System Started ");
    // Serial.println("==================================");
}

void loop() {

    // TODO 7:
    // Read humidity value from sensor
    // float humidity = dht.readHumidity();

    // TODO 8:
    // Read temperature value from sensor
    float temperature = dht.readTemperature();  // Celsius by default

    // TODO 9:
    // Check if either reading failed using isnan()
    if (isnan(humidity) || isnan(temperature)) {
        Serial.println("Error: Failed to read from DHT11 sensor!");
        return;
    }

    // TODO 10:
    // Print formatted temperature and humidity values
    // Serial.print("Temperature: ");
    // Serial.print(temperature);
    // Serial.print(" °C | Humidity: ");
    // Serial.print(humidity);
    // Serial.println(" %");

    // TODO 11:
    // Add a 2-second delay before next reading
    delay(2000);
}