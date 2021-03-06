void   ICACHE_FLASH_ATTR sendEVSEdata();
bool   ICACHE_FLASH_ATTR queryEVSE();
String ICACHE_FLASH_ATTR printIP(IPAddress);
void   ICACHE_FLASH_ATTR parseBytes(const char*, char, byte*, int, int);
void   ICACHE_RAM_ATTR   handleMeterInt();
void   ICACHE_FLASH_ATTR updateMeterData();
int    ICACHE_FLASH_ATTR getChargingTime();
void   ICACHE_FLASH_ATTR rfidloop();
void   ICACHE_FLASH_ATTR pushWebsocketEVSEData();
void   ICACHE_FLASH_ATTR sendStatus();
void   ICACHE_FLASH_ATTR printScanResult(int);
void   ICACHE_FLASH_ATTR logLatest(String, String);
void   ICACHE_FLASH_ATTR updateLog(bool);
bool   ICACHE_FLASH_ATTR queryEVSE();
bool   ICACHE_FLASH_ATTR activateEVSE();
bool   ICACHE_FLASH_ATTR deactivateEVSE(bool);
bool   ICACHE_FLASH_ATTR setEVSEcurrent();
void   ICACHE_FLASH_ATTR pushSessionTimeOut();
void   ICACHE_FLASH_ATTR sendEVSEdata();
void   ICACHE_FLASH_ATTR sendTime();
void   ICACHE_FLASH_ATTR sendUserList(int, AsyncWebSocketClient *);
void   ICACHE_FLASH_ATTR onWsEvent(AsyncWebSocket*, AsyncWebSocketClient*, AwsEventType, void*, uint8_t*, size_t);
void   ICACHE_FLASH_ATTR ShowReaderDetails();
void   ICACHE_FLASH_ATTR setupRFID(int, int);
bool   ICACHE_FLASH_ATTR connectSTA(const char*, const char* , byte[]);
bool   ICACHE_FLASH_ATTR startAP(const char*, const char*);
bool   ICACHE_FLASH_ATTR loadConfiguration();
void   ICACHE_FLASH_ATTR fallbacktoAPMode();
void   ICACHE_FLASH_ATTR startWebserver();
void   ICACHE_FLASH_ATTR setWebEvents();
void   ICACHE_FLASH_ATTR loop();
void   ICACHE_FLASH_ATTR setup();
bool   ICACHE_FLASH_ATTR setEVSERegister(uint16_t reg, uint16_t val);
float  ICACHE_FLASH_ATTR readMeter(uint16_t reg);
void   ICACHE_FLASH_ATTR updateMMeterData();
void   ICACHE_FLASH_ATTR updateMMeterCurrent();