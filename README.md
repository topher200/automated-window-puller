# Window Puller ESP32 TMC2077 NEMA17 project

### Build and Flash

```bash
$ cp src/config.h.example src/config.h
# Edit src/config.h with your WiFi credentials

$ pio run --target upload
```

### Monitor the device

```bash
$ pio device monitor
```
