# SP project [25]
# 🪑 Furniture Management System (Structured Programming Project)

## 📋 System Overview
This system is designed to manage
furniture store operations using **C++ structured programming principles**.
It enables two types of users—**customers** and **admin**—to perform
different operations such as purchasing furniture, editing inventory,
managing customer orders, and updating order statuses.

### 🔧 Technologies Used
- C++
- Arrays
- Structs
- Functions
- File I/O (for loading and saving data only)

> ⚠️ **Note**: File operations are only used at the beginning (to load data) 
and at the end (to save data). 
All processing must be done using arrays and variables during runtime.

---

## 👥 System Actors & Use Cases

### 👤 **Customer**
- Log in
- View list of available furniture
- Select furniture to purchase
- Modify or delete orders (within 72 hours)
- Log out

### 🧑‍💼 **Admin**
- Log in
- Edit or delete furniture information
- View all customer orders
- View detailed customer and selected furniture information
- Update the status of orders:  
  - `Pending`  
  - `Waiting for delivery`  
  - `Delivered`
- Log out

---

## 📁 Project Folder Structure (Suggested)
📂 FurnitureManagementSystem/
├── user.h               // Login & signup for both admin and customer
├── user.cpp             
├── customer.h           // Customer functions (view furniture, place/edit/delete orders)
├── customer.cpp         
├── admin.h              // Admin functions (manage furniture, orders, customer info)
├── admin.cpp            
├── furniture.h          // Furniture struct + functions (view, edit, delete)
├── furniture.cpp        
├── order.h              // Order struct + processing (create, update status, validate 72hr)
├── order.cpp            
├── fileHandler.h        // Load/save furniture, orders, customers
├── fileHandler.cpp      
├── main.cpp             // App entry point with menu and flow control
└── README.md


7. 🛠️ Implementation Plan
✅ Phase 1: Create all structs
✅ Phase 2: Implement login system
✅ Phase 3: Develop furniture view, buy, modify, delete logic
✅ Phase 4: Add admin features for managing orders/furniture
✅ Phase 5: Implement file loading/saving
✅ Phase 6: Final testing and refinement



