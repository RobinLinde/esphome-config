# IKEA VINDRIKTNING

Configuration example for IKEA VINDRIKTNING air quality sensor. TX pin of the IKEA PCB should be wired to pin D7.

## Example configuration.yaml

```yaml
substitutions:
  friendly_name: "Sonoff Mini"
  devicename: "sonoffmini"
  ota_password: "YOUR_OTA_PASSWORD"
  wifi_ssid: "YOUR_WIFI_SSID"
  wifi_password: "YOUR_WIFI_PASSWORD"
  fallback_password: "YOUR_FALLBACK_PASSWORD"
  api_key: "YOUR_API_KEY"

packages:
  vindriktning: "github://RobinLinde/esphome-config/devices/vindriktning/vindriktning.yaml@main"
```
