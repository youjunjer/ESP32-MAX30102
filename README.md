# 使用ESP32及MAX30102感測器進行血氧感測
準備材料：

  1. ESP32
  2. 0.96 OLED  
  3. MAX30102
  4. 無源蜂鳴器
  5. 杜邦線、麵包版等

# 血氧原理：利用帶氧血紅素吸收紅外光(850-1000nm)，未帶氧血紅素吸收紅光的特性(600-750nm)來計算血氧值

![血氧](https://user-images.githubusercontent.com/40359899/233157219-b0be9a33-7c9a-40cd-9589-c095eb37384c.jpg)

帶氧血紅素
![image](https://user-images.githubusercontent.com/40359899/227777815-6c28d550-bf01-4060-96fd-013dd674d93d.png)

不同吸收率
# 研習資料
  1. 研習講義：https://twgo.io/30102
  2. Blocklyduino血氧感測教學影片：https://www.youtube.com/watch?v=L2sBLHHKa8A

# 須安裝的程式庫
  1. Adafruit SSD1306(2.4.6版)
  2. Adafruit GFX(1.10.12版)
  3. MAX30105(不限版本)
  4. ESP32Servo(不限版本)

# 接線方式
![血氧](https://user-images.githubusercontent.com/40359899/227778216-cdd83eb2-a9d8-4ced-a4c1-eedbc5183757.jpg)
MAX30102     ESP32       OLED

GND	      ->  GDN   ->    GND

SCK(SCL)  ->  22	  ->	  SCL

SDA	      ->  21	  ->	  SDA

VCC	      ->  3.3V  ->	  VDD


# 程式範例
  1. 基礎範例01BasicRead.ino，修改於範例，能用波形呈現
![image](https://user-images.githubusercontent.com/40359899/227778530-55c4b15b-6a7b-474d-87d7-c520d53ce013.png)
  2. 完整讀取範例02SPO2_BPM.ino，將正確的心跳血氧值顯示再OLED上
![image](https://user-images.githubusercontent.com/40359899/227778486-bc797a14-94e2-4692-a078-8dcda1f6f17d.png)


