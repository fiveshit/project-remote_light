# project-remote_light
使用arduino作為核心，搭上APP(nRF connect)，配合繼電器跟藍芽4.0。
電路連接
arduino RX/TX 連接 藍芽的TX/RX、5V、GND，繼電器的5V跟GND跟IN也連接arduino的5V跟GND跟12。
繼電器的另一端則則是GND、NO、NC，NO代表常開，NC代表常閉，通常都是COM、NO。
之後燒錄light.ino即可。
