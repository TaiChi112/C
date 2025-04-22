## สร้าง object 
- Stove -> เตา
  - type -> ประเภท เตา -> เตาเเก๊ส เตาไฟฟ้า เตาเเม่เหล็กไฟฟ้า เตาอินฟราเรต
- Pot -> หม้อ
  - กำหนด field
    - price ราคาหม้อ
    - width ความกว้างของหม้อ
    - stove เตา
    - amount_stove จำนวนเตา
- Steaming_Pot -> หม้อนึ่ง
  - กำหนด field
    - layer -> จำนวนซึ้งของหม้อนึ่ง
- Noodle_Pot -> หม้อก๋วยเตี๋ยว
  - กำหนด field
    - compartment จำนวนช่องของหม้อก๋วยเตี๋ยว
  
- สร้าง defulat object กำหนดให้เเต่ละ object ที่สร้างครั้งเเรก โดยที่ไม่กำหนด parameter ใดๆ มีค่า default เป็น
  - กำหนดให้ Stove เตาที่สร้างครั้งเเรกมีค่า default object เป็น เตาเเก๊ส
  - กำหนดให้ Pot หม้อที่สร้างครั้งเเรกมีค่า default object เป็น price(ราคา) 299, width(ความกว้างของหม้อ) 18, height(ความสูงของหม้อ) 8, stove(เตาที่ใช้) stove_gas, amount_stove(จำนวนเตาที่ใช้) 1
  - กำหนดให้ Steaming_Pot หม้อนึ่งที่สร้างครั้งเเรกมีค่า default object เป็น price(ราคา) 450, width(ความกว้างของหม้อ) 25, height(ความสูงของหม้อ) 30, stove(เตาที่ใช้) stove_gas, amount_stove(จำนวนเตาที่ใช้) 1, layer(จำนวนซึ้งของหม้อนึ่ง) 1
  - กำหนดให้ Noodle_Pot หม้อก๋วยเตี๋ยวที่สร้างครั้งเเรกมีค่า default object เป็น price(ราคา) 2500, width(ความกว้างของหม้อ) 50, height(ความสูงของหม้อ) 45, stove(เตาที่ใช้) stove_gas, amount_stove(จำนวนเตาที่ใช้) 1, compartment(จำนวนช่องของหม้อก๋วยเตี๋ยว) 1

- สร้าง overide object  สร้าง object อื่นๆ ที่มีการใส่ arugment เข้าไปใน parameter ของ object 
  - กำหนดให้ parameter ที่รับเหมือน default object เเต่เป็นการรับ ไม่ใช่ default parameter
  - กรณีของ stove ต้องทำการ allocate memory หรือจองพื้นที่สำหรับจำนวนเตา stove ด้วยโดยรับ amount_stove เป็นตัวกำหนดจำนวนเตา ในส่วนนี้เเม้จะ overide object เเต่ก็ยังคงกำหนดให้ stove เป็น default object ใน overide object
  
- function method ของ object ที่ใช้สำหรับ set field object โดยผ่าน function ไม่ใช่ default & overide object กรณีของ stove ต้องกำหนด index ที่จะ set stove เข้าไปใน index ไหน function สำหรับ set || reset amount_stove จะต้องมีการ deallocate memory สำหรับการคืน memory ที่ใช้เเล้วค่อยกำหนดใหม่
- function method ของ object ที่ใช้สำหรับ get field object นั้นๆ เเบบเจาะจง สำหรับ stove ต้องกำหนด index หรือ ตำเเหน่งที่ต้องการ stove ไหน
- function method ของ object ที่ใช้สำหรับ show field object นั้นๆ ทั้งหมด

- สำหรับ Object Pot(หม้อ) 
  - สร้าง function get จำนวน object ที่สร้างของ Pot ด้วย เเม้ยังไม่ได้สร้าง object จาก Pot ก็จะต้องใช้ function นั้นเพื่อ get จำนวน object Pot ออกมาได้ ต้องไม่ผูกมัดกับ Object นั้น
  - สร้าง function สำหรับการเปรียบเทียบ price(ราคา) สำหรับ object Pot(หม้อ) ที่สร้างว่า 2 object ที่สร้าง Pot ไหน price(ราคา) เเพงกว่ากัน คำตอบที่อยากได้ คือ Pot ไหน price(หม้อ) เเพงกว่าจริง

- สำหรับ Object Steaming_Pot 
  - สร้าง function add || create new object ผ่าน function โดย new object ที่ได้ ความกว้างของ new object จะเท่ากับ object ที่มีความกว้างกว่า ความสูงเเละจำนวนซึ้งของ new object จะเท่ากับผลรวมของทั้ง 2 object เเละซึ้งก็ตามลำดับที่กล่าวมา เเละ new object ที่ได้สามารถใช้ stove_gas ได้

- main file
  - สร้าง object stove 4 object โดยเเต่ละ object ใช้เตาดังนี้ ตามลำดับ
    - stove_gas
    - stove_electric
    - stove_electromagnetic 
    - stove_infrared 
  - สร้าง object Pot, Steaming_Pot, Noodle_Pot ทั้งหมด 3 object ตามลำดับ
    - Object Pot 
      - price 850, width 20, height 9, stove stove_gas & stove_electric
    - Object Steaming_Pot
      - price 1500, width 28, height 40, stove stove_gas & stove_electric & stove_electromagnetic & stove_infrared, layer 3
    - Object Noodle_Pot 
      - price 1350, width 40, height 43, stove stove_gas & stove_electric, compartment 2
  - เปลี่ยน stove ของ Noodle_Pot จาก 2 เเบบข้างบนเป็น สามารถใช้กับ stove 3 เเบบ คือ stove_gas & stove_electromagnetic & stove_infrared
  - เปรียบเทียบ object Steaming_Pot กับ object Noodle_Pot Pot ไหนเเพงกว่ากัน
  - เเสดง Steaming_Pot ใช้ stove ประเภทไหนบ้าง โดยห้ามเรียกใช้ผ่าน function show implement code ขึ้นมาเอง