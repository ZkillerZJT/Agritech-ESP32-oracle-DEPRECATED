#include "oci.h"
#include "WiFi.h"
#include "credentials.h"
//extraer las librerias del OCI REST API ANTES DE CONTINUAR
const char* ssid = "texas 5ghz";
const char* password = wifipass;

OciProfile ociProfile(tenancyOcid, userOcid, keyFingerprint, apiKey);

Oci oci(ociProfile);

void connectToWiFi() {
    Serial.print("Connecting to WiFi...");
    WiFi.begin(ssid, password);
    
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.print(".");
    }
    Serial.println("\nConnected to WiFi");
}
void monitorWiFi() {
    if (WiFi.status() != WL_CONNECTED) {
        Serial.println("Wi-Fi disconnected. Attempting to reconnect...");
        connectToWiFi();
    }
}

