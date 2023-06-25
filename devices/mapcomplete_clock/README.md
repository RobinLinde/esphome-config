# MapComplete Clock

ESPHome configuration file for a clock made of addressable LEDs, like the [Brightdot Clock](https://www.velleman.eu/products/view/?id=449304) sold by Velleman.
In addition to functioning as a normal clock, this clock can also show changesets made with [MapComplete](https://github.com/pietervdvn/MapComplete).
To do this, there should be a service running that publishes statistics to MQTT. For this [MapComplete-MQTT](https://github.com/RobinLinde/MapComplete-MQTT) can be used.

Connection is made with Home Assistant through the API, and MQTT is used to receive changesets from MapComplete-MQTT.

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
  api_key: "YOUR_API_KEY"
  mqtt_broker: "YOUR_MQTT_BROKER"
  mqtt_user: "YOUR_MQTT_USER"
  mqtt_password: "YOUR_MQTT_PASSWORD"

packages:
  clock: "github://RobinLinde/esphome-config/devices/mapcomplete_clock/mapcomplete_clock.yaml@main"
```

## Attribution

This code is based on the [ESPHome-Analog-Clock](https://github.com/markusressel/ESPHome-Analog-Clock) repository by Markus Ressel, which is licensed under the CC0 1.0 Universal license.
