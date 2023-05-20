# Sonoff Mini

Basic configuration for the Sonoff Mini.

## Example configuration

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
  sonoffmini: "github://RobinLinde/esphome-config/devices/sonoffmini/sonoffmini.yaml@main"
```
