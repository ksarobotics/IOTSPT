



#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>

int httpCode =0; 

class IOTSPT {       // The class
  public:  
  String email;
  String key;// Access specifier
   void upload(int ch, String data);       // Attribute (int variable)
    String download(int ch);  // Attribute (string variable)
};

void IOTSPT::upload(int ch, String data){

    if(WiFi.status()== WL_CONNECTED){   //Check WiFi connection status
      String payload="";

      String cha=String(ch);

   HTTPClient http;    //Declare object of class HTTPClient
   Serial.println("http://iotspt.com/update.php?email=" + email + "&&kkey=" + key + "&&ch=ch"+ cha +"&&data=" + data);
   http.begin("http://iotspt.com/update.php?email=" + email + "&&kkey=" + key + "&&ch=ch"+ cha +"&&data=" + data);      //Specify request destination
        //Specify request destination
   http.addHeader("Content-Type", "text/plain");  //Specify content-type header
    httpCode = http.POST("Message from ESP8266");   //Send the request
    payload = http.getString();                  //Get the response payload
   Serial.print(payload);    //Print request response payload
payload.trim();

   http.end();//Close connection
  }else{
     Serial.println("Error in WiFi connection");
  }
  }



  String IOTSPT::download(int ch){

   if(WiFi.status()== WL_CONNECTED){   //Check WiFi connection status
    String payload="";

   HTTPClient http;    //Declare object of class HTTPClient
   //Serial.println("http://iotspt.com/check.php?email=" + email + "&&kkey=" + key + "&&ch=ch" + String(ch));
     http.begin("http://iotspt.com/check.php?email=" + email + "&&kkey=" + key + "&&ch=ch" + String(ch));
          http.addHeader("Content-Type", "text/plain");  //Specify content-type header
    httpCode = http.POST("Message from ESP8266");   //Send the request
    payload = http.getString();                  //Get the response payload
   //Print request response payload
 payload.trim();
return payload;
   http.end();//Close connection
  }else{
     Serial.println("Error in WiFi connection");
  }
  }
