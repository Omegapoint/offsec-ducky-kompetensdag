# Kompetensdag Gothenburg 2022-04-29

In this kompetensdag we will try to create and program our own [Rubber Duckys](https://shop.hak5.org/products/usb-rubber-ducky-deluxe). As these are expensive and hard to come by we will create our own.

What is a Rubber Ducky? It is a programmable USB that emulates a keyboard. The possibilities are endless, but some examples are inactivating antivirus, keylogger or creating a reverse shell.

Every participant will get the necessary hardware and can keep it afterwards. The workshop is limited to 20 people.

## Hardware

USB-A port
[Programmable Digispark board](https://www.amazon.se/AZDelivery-Digispark-Kickstarter-kompatibel-inklusive/dp/B076KSCQGY/ref=sr_1_2?crid=379BNWSNKXBGQ&keywords=DigiSpark%2Bmicrocontroller&qid=1649231052&sprefix=digispark%2Bmicrocontroller%2Caps%2C244&sr=8-2&th=1)

## Software

Install the [Arduino IDE](https://www.arduino.cc/en/software)

Add the string `https://raw.githubusercontent.com/ArminJo/DigistumpArduino/master/package_digistump_index.json` to `Arduino -> Preferences -> Additional Boards Manager URLs`

Now you can download the board configuration `Tools -> Boards -> Boards Manager`. Select contributed and install `DigiStump AVR Boards` v1.7.5.

If you get an error about micronucleus then install it from [Github](https://github.com/micronucleus/micronucleus/releases) and add it to the specified path in the error message.

## Examples

Example scripts can be found in [this](https://github.com/CedArctic/DigiSpark-Scripts) Github repository.
