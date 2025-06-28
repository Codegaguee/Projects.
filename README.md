# 🛍️ Mall Shopping System in C

A simple terminal-based shopping mall simulation written in C.  
This program allows users to shop from four categories: Clothings, Electronics, Groceries, and Snacks. It calculates the bill, applies discounts, and generates a final cash memo.

---

## 💡 Features

- Category selection (Clothings, Electronics, Groceries, Snacks)
- Multiple product choices with quantity
- Dynamic billing based on selection
- Discount system:
  - 5% for bills over ৳1000
  - 10% for bills over ৳1500
  - 20% for bills over ৳2000
- Final bill summary with discount and payable amount

---

## 🧪 How It Works

1. User selects a category.
2. Chooses a product from that category.
3. Enters quantity.
4. Repeats as needed.
5. When done, selects "Confirm Order" to view the final bill.

---

## 🧵 Categories & Sample Products

### 🧥 Clothings
- Plain White T-Shirt – ৳350
- Blue Baggy Jeans – ৳1200
- Black Hoodie – ৳1500  
...

### 💻 Electronics
- Samsung A14 – ৳18000  
...

### 🥦 Groceries
- Basmati Rice (5kg) – ৳1500  
...

### 🍪 Snacks
- Mr. Twist – ৳80  
...

---

## 🛠️ Technologies Used

- C programming language
- Standard I/O and control structures (`switch`, `do-while`, `if-else`)

---

## 🚀 How to Run

Compile and run with any C compiler:

```bash
gcc mall.c -o mall
./mall
