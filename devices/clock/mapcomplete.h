void showChangesets (
   esphome::light::AddressableLight &it,
    std::string colors
) {
    // Split the colors into an array without using the ESPHome split function or a stringstream
    std::vector<std::string> color_array;
    std::string color;

    // First we remove the leading and trailing brackets
    colors = colors.substr(1, colors.length() - 2);

    for (int i = 0; i < colors.length(); i++) {
        ESP_LOGD("main", "Processing char %c", colors[i]);
        if (colors[i] == ',' || i == colors.length() - 1) {
        color_array.push_back(color);
        color = "";
        } else {
        color += colors[i];
        }
    }

    ESP_LOGD("main", "Found %d colors", color_array.size());

    // If we have more colors than LEDs, we only show the last n colors
    if (color_array.size() > it.size()) {
        ESP_LOGD("main", "More colors than LEDs, only showing last %d colors", it.size());
        color_array.erase(color_array.begin(), color_array.begin() + color_array.size() - it.size());
    }

    // Set the colors
    for (int i = 0; i < it.size(); i++) {
        ESP_LOGD("main", "Processing LED %d", i);
        // Check if we have a color for this LED
        if (i < color_array.size()) {
        ESP_LOGD("main", "Setting color %s", color_array[i].c_str());
        // Now we need to remove the # from the color
        std::string color = color_array[i].substr(1);

        // Then we can convert the color from HEX to RGB
        int r, g, b;
        sscanf(color.c_str(), "%02x%02x%02x", &r, &g, &b);
        
        // And finally set the color
        it[i] = Color(r, g, b);
        
        } else {
        ESP_LOGD("main", "No color found, setting black");
        it[i] = Color(0, 0, 0);
        }
    }
}

void showSingleChangeset (
    esphome::light::LightCall call,
    std::string color
) {
    // Then we can convert the color from HEX to RGB, making sure to remove the # from the color, as well as the surrounding quotes
    color = color.substr(2, color.length() - 3);
    ESP_LOGD("main", "Color: %s", color.c_str());

    int r, g, b;
    sscanf(color.c_str(), "%02x%02x%02x", &r, &g, &b);

    ESP_LOGD("main", "Color: %d, %d, %d", r, g, b);

    // Then we need to convert them to a float between 0 and 1
    float rf = r / 255.0;
    float gf = g / 255.0;
    float bf = b / 255.0;

    call.set_effect("Pulsate");
    call.set_rgb(rf, gf, bf);
    call.perform();
}