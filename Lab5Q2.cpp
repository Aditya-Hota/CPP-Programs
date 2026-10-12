#include <iostream>

// Base Class 1
class WiFiModule {
public:
    void connect() {
        std::cout << "Connecting via WiFi 6 protocol...\n";
    }
};

// Base Class 2
class ZigbeeModule {
public:
    void connect() {
        std::cout << "Connecting via Zigbee mesh network...\n";
    }
};

// Derived Class: Multiple Inheritance
class SmartHub : public WiFiModule, public ZigbeeModule {
public:
    void establishAllConnections() {
        std::cout << "Initializing Smart Hub...\n";
        // Resolving overlapping names using Scope Resolution Operator (::)
        WiFiModule::connect();   
        ZigbeeModule::connect(); 
        std::cout << "Hub is online.\n";
    }
};

int main() {
    std::cout << "\n--- 2) Multiple Inheritance Demo ---\n";
    SmartHub hub;
    hub.establishAllConnections();
    return 0;
}
