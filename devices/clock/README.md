# Clock

ESPHome configuration file for a clock made of addressable LEDs, like the [Brightdot Clock](https://www.velleman.eu/products/view/?id=449304) sold by 

## Example configuration

```yaml
substitutions:
  friendly_name: "Clock"
  devicename: "clock"
  num_leds: "60"
  ota_password: "YOUR_OTA_PASSWORD"
  wifi_ssid: "YOUR_WIFI_SSID"
  wifi_password: "YOUR_WIFI_PASSWORD"
  fallback_password: "YOUR_FALLBACK_PASSWORD"
  mqtt_broker: "YOUR_MQTT_BROKER"
  mqtt_user: "YOUR_MQTT_USER"
  mqtt_password: "YOUR_MQTT_PASSWORD"

packages:
  clock: "github://RobinLinde/esphome-config/devices/clock/clock.yaml@main"
```

## Attribution

This code is based on the [ESPHome-Analog-Clock](https://github.com/markusressel/ESPHome-Analog-Clock) repository by Markus Ressel, which is licensed under the CC0 1.0 Universal license.
