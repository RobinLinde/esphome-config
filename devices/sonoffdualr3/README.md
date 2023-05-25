# Sonoff Mini

Basic configuration for the Sonoff Dual R3 v1.X. Version 2.X uses a different power sensor and is not supported in this configuration.

## Example configuration

```yaml
substitutions:
  friendly_name: "Sonoff Dual R3"
  devicename: "sonoffdualr3"
  ota_password: "YOUR_OTA_PASSWORD"
  wifi_ssid: "YOUR_WIFI_SSID"
  wifi_password: "YOUR_WIFI_PASSWORD"
  fallback_password: "YOUR_FALLBACK_PASSWORD"
  api_key: "YOUR_API_KEY"

packages:
  sonoffmini: "github://RobinLinde/esphome-config/devices/sonoffdualr3/sonoffdualr3.yaml@main"
```
