# LSC Smart Connect Smart Power Plug

ESPHome configuration file for the LSC Smart Connect Smart Power Plug sold by Action.

Below are some links for various countries:

- [NL](https://www.action.com/nl-nl/p/3202087/lsc-smart-connect-slimme-stekker/)
- [AT](https://www.action.com/de-at/p/3202087/lsc-smart-connect-intelligenter-stecker/)
- [DE](https://www.action.com/de-de/p/3202087/lsc-smart-connect-intelligenter-stecker/)
- [ES](https://www.action.com/es-es/p/3202087/enchufe-inteligente-lsc-smart-connect/)
- [LU](https://www.action.com/fr-lu/p/3202087/prise-connectee-lsc-smart-connect/)
- [IT](https://www.action.com/it-it/p/3202087/presa-intelligente-lsc-smart-connect/)

## Features

- Power monitoring
- Enable/disable LED
- Enable/disable button

## Example configuration

```yaml
substitutions:
  friendly_name: "Smart Plug"
  devicename: "smart_plug"
  ota_password: "YOUR_OTA_PASSWORD"
  wifi_ssid: "YOUR_WIFI_SSID"
  wifi_password: "YOUR_WIFI_PASSWORD"
  fallback_password: "YOUR_FALLBACK_PASSWORD"

packages:
  smart_plug: "github://RobinLinde/esphome-config/devices/lscsmartplug/lscsmartplug.yaml@main"
```

## Opening the device, and connecting the wires

See the [lsc-smart-connect-esphome](https://github.com/wjtje/lsc-smart-connect-esphome/blob/main/power-plug/README.md) repository by wjtje for instructions on how to open the device, and connect the wires.

## Attribution

This code is based on the [lsc-smart-connect-esphome](https://github.com/wjtje/lsc-smart-connect-esphome) repository by wjtje, which is licensed under the MIT license.