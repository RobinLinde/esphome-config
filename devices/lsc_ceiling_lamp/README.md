# LSC Smart Ceiling Lamp

ESPHome configuration file for the LSC Smart Connect Ceiling Lamp sold by Action.

Below are some links for various countries:

- [NL](https://www.action.com/nl-nl/p/3007213/lsc-smart-connect-plafondlamp/)
- [CZ](https://www.action.com/cs-cz/p/3007213/stropni-lampa-lsc-smart-connect/)
- [DE](https://www.action.com/de-de/p/3007213/lsc-smart-connect-deckenleuchte/)
- [ES](https://www.action.com/es-es/p/3007213/plafon-lsc-smart-connect/)
- [BE (FR)](https://www.action.com/fr-be/p/3007213/plafonnier-intelligent-lsc-smart-connect/)
- [FR](https://www.action.com/fr-fr/p/3007213/plafonnier-intelligent-lsc-smart-connect/)
- [LU](https://www.action.com/fr-lu/p/3007213/plafonnier-intelligent-lsc-smart-connect/)
- [IT](https://www.action.com/it-it/p/3007213/plafoniera-lsc-smart-connect/)
- [BE (NL)](https://www.action.com/nl-be/p/3007213/lsc-smart-connect-plafondlamp/)
- [PL](https://www.action.com/pl-pl/p/3007213/lampa-sufitowa-lsc-smart-connect/)

## Example configuration

```yaml
substitutions:
  friendly_name: "Smart Ceiling Lamp"
  devicename: "smart_ceiling_lamp"
  ota_password: "YOUR_OTA_PASSWORD"
  wifi_ssid: "YOUR_WIFI_SSID"
  wifi_password: "YOUR_WIFI_PASSWORD"
  fallback_password: "YOUR_FALLBACK_PASSWORD"
  api_key: "YOUR_API_KEY"

packages:
  smart_ceiling_lamp: "github://RobinLinde/esphome-config/devices/lsc_ceiling_lamp/lsc_ceiling_lamp.yaml@main"
```

## Opening the device, and connecting the wires

1. Remove the plastic cover from the ceiling lamp, by twisting it counter-clockwise.
2. Take out the 9 screws that hold the PCB and the plastic cover to the metal frame.
3. Desolder the 3 and 4 pin connectors from the sides of the semi-circular controller PCB, to do this you can use a soldering iron and a desoldering pump.
4. Desolder the CB2S chip from the controller PCB, to do this you can use a soldering iron and desoldering wick.
5. Solder the wires from the PCB to connect to the USB to serial adapter, pins are shown in the silkscreen on the PCB.
6. Connect the USB to serial adapter to your computer, and flash the ESPHome firmware.
