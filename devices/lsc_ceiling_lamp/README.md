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

After opening the plastic cover, by twisting it counter-clockwise, you need to unscrew all 9 screws,
seen here in red, that hold the PCB and the plastic cover to the metal frame.

![Lamp opened, screws marked](./img/screws.png)

After doing that, you should be able to remove the PCB from the lamp.
To gain access to the pins of the CB2S chip, you can either cut away to the protective plastic on the bottom, which is not recommended,
or desolder the circular PCB to remove it intact.

To remove the PCB intact, you need to desolder the 3 and 4 pin connectors from the sides of the semi-circular controller PCB, shown here in red. This can be done with a soldering iron and a desoldering pump. It might be neccesary to heat up the pins after desoldering, to remove the connectors.

![Lamp opened, connectors marked](./img/pins.png)

After desoldering, you should now have access to the CB2S chip, which is shown here in red.

![Bottom of PCB, CB2S chip marked](./img/bottom-pcb.png)

To flash the ESPHome firmware, you need to solder the wires from the PCB to connect to the USB to serial adapter, the pins are shown in the silkscreen on the PCB.

![CB2S chip, wires connected](./img/cb2s.JPG)

After connecting the wires, you can connect the USB to serial adapter to your computer, and flash the ESPHome firmware.
