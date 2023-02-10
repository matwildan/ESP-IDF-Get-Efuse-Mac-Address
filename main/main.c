#include <stdio.h>
#include "esp_mac.h"

void app_main(void)
{
  unsigned char mac_base[6] = {0};
  unsigned char c_mac_base[20] = {0};
  esp_efuse_mac_get_default(mac_base);
  sprintf((char*)c_mac_base, "%02X%02X%02X%02X%02X%02X", mac_base[0],mac_base[1],mac_base[2],mac_base[3],mac_base[4],mac_base[5]);
  printf("MAC Address: ");
  printf("%s\n", c_mac_base);
}
