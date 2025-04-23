# Window Puller ESP32 TMC2077 NEMA17 project

## Build

```bash
cp src/config.h.example src/config.h
# Edit src/config.h with your WiFi credentials
pio run --environment esp32-wroom
```

## Flash the device

```bash
pio run --target upload --environment esp32-wroom
# OR
pio run --target upload --environment esp-wrover-kit
```

## Monitor the device

```bash
pio device monitor
```
