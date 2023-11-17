# 11_2023_Qt (Ubuntu 20.04 && )

## **no1_Basic**


## **no2_QtSerialPort**

## ** Lỗi gặp phải :**
> Lỗi 1
>>- _error: --->>> qt.qpa.plugin: Could not load the Qt platform plugin "wayland" in "" even though it was found._
>>- _fix_ : Thêm biến môi trường  **```QT_QPA_PLATFORM = xcb```**

> Lỗi 2
> 👎 error: Project ERROR: Unknown module(s) in QT: serialport
