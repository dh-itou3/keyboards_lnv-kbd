# lnv_kbd

![20230915090107](https://github.com/dh-itou3/keyboards/assets/36159060/cb29668e-a84a-44da-8f51-293552dc4c81)

これはLenovo社製キーボードです。専用PCBを内蔵して改造することにより、キー配列を自由にカスタマイズ可能にしました。例えば左下のFnキーとCtrlキーを入れ替えるなど。  
This is a Lenovo keyboard. It is customize the key layout freely with a built-in original PCB. For example, exchange the Fn key and the Ctrl key in the lower left corner, etc.  

* Keyboard Maintainer: [dh-itou3](https://github.com/dh-itou3)
* Hardware Availability: [website](https://shk-maker.hatenablog.jp/entry/2023/09/23/221256)

Make example for this keyboard (after setting up your build environment):

    make lnv_kbd:default

Flashing example for this keyboard:

    make lnv_kbd:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

* **Physical reset button**: Briefly press the button on the back of the keyboard.
