// ============================
// TASK: Order.h - Order Management
// ============================

/*
- Customer Side: Implement Order Placement:
  - Customers should be able to select furniture, specify quantity, and place an order.
  - Display the total price for the selected items before confirming the order.

- Customer Side: Implement Order Modification and Deletion:
  - Allow customers to modify their orders within 72 hours (e.g., change quantity or remove items).
  - Implement a time check to ensure order modifications are only allowed within the specified window (72 hours).

- Admin Side: Implement Order Status Management:
  - Admins can view all orders and change their status (delivered, waiting, pending).
  - Implement status tracking and synchronization with the order's data.

- Implement Order Total Calculation:
  - For each order, calculate the total price based on furniture items and quantities.
  - Include any applicable discounts or taxes if required.
*/


#pragma once
