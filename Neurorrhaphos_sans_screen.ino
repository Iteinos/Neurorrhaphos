#include "BluetoothA2DPSink.h"
BluetoothA2DPSink a2dp_sink;

#include <XantoI2C.h>
#include "XantoKT0803L.h"
XantoKT0803L fm(22, 21);

long activeTimer = 0;
float freq = 91.0;

void setup() {
  Serial.begin(115200);
  i2s_pin_config_t my_pin_config = {
    .bck_io_num = 26,
    .ws_io_num = 25,
    .data_out_num = 27,
    .data_in_num = I2S_PIN_NO_CHANGE
  };
  a2dp_sink.set_pin_config(my_pin_config);
  a2dp_sink.set_on_data_received(data_received_callback);
  a2dp_sink.start("Apo_Neurorrhaphos");

  fm.setFrequency(freq);
}

void data_received_callback() {
  Serial.println(".");
  activeTimer = millis();
}

void loop() {

}
