
#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>
int httpCode =0; 
char ssid[]="YOUR-WIFI-SSID";
char password[]="YOUR-WIFI-PASSWARD";
String email="IOTSPT-EMAIL";
String key="IOTSPT-KEY";
String downloadedData;

void setup() {
 
  Serial.begin(9600);
  WiFi.begin(ssid, password); 
  while (WiFi.status() != WL_CONNECTED) {  //Wait for the WiFI connection completion
    delay(500);
    Serial.println("Waiting for connection");
       } 
       upload(3, "1234");
       downloadedData=download(2);
       Serial.println(downloadedData);
}

void loop(){
  
  }
 
