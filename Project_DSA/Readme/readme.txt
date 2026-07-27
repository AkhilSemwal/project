# Cash Flow Minimizer + Expense Tracker

A **Data Structures & Algorithms (DSA)** based Project-Based Learning (PBL) project developed in **C**. The application helps users manage shared expenses and minimizes the number of transactions required to settle debts within a group using a greedy cash flow minimization algorithm.

---

## 📌 Project Overview

Managing expenses in a group often leads to complex payment calculations. This project combines an **Expense Tracker** with a **Cash Flow Minimizer** to provide an efficient solution.

The project demonstrates the practical application of multiple DSA concepts including linked lists, heaps, hash tables, searching, sorting, greedy algorithms, and file handling.

---

## ✨ Features

### 💰 Expense Management
- Add expenses
- View all expenses
- Update expenses
- Delete expenses
- Search expenses
- Store data permanently using files

### 👥 User & Group Management
- Add users
- Create groups
- Add or remove group members
- Split expenses equally
- Prevent duplicate users

### 🔄 Cash Flow Minimizer
- Calculate each user's net balance
- Identify creditors and debtors
- Minimize the number of transactions
- Display "Who Pays Whom"

### 📊 Reports
- Total expenses
- Highest spender
- Lowest spender
- Category-wise reports
- Monthly reports

### 💾 File Handling
Stores data in text files for persistence.

Example files:
- expenses.txt
- users.txt
- groups.txt
- transactions.txt

---

## 🧠 Data Structures & Algorithms Used

| Concept | Usage |
|----------|-------|
| Structures | Store expense and user data |
| Arrays | Reports and summaries |
| Linked List | Expense storage |
| Hash Table | Fast user lookup |
| Queue | Recent transactions (Optional) |
| Stack | Undo operation (Optional) |
| Heap / Priority Queue | Cash flow optimization |
| Searching | Find users and expenses |
| Sorting | Reports |
| Greedy Algorithm | Minimize transactions |
| Graph Concept | Represent users and balances |
| File Handling | Persistent storage |

---

## 📂 Project Structure

```
CashFlowMinimizer/
│
├── main.c
├── expense.c
├── expense.h
│
├── group.c
├── group.h
│
├── cashflow.c
├── cashflow.h
│
├── heap.c
├── heap.h
│
├── report.c
├── report.h
│
├── expenses.txt
├── users.txt
├── groups.txt
├── transactions.txt
│
└── README.md
```

---

## ⚙️ How It Works

### Expense Tracker

1. Users add expenses.
2. Expenses are stored in a linked list.
3. Data is saved into text files.
4. Reports can be generated anytime.

---

### Cash Flow Minimizer

The algorithm calculates each user's net balance.

Example:

```
A paid ₹1200
B paid ₹800
C paid ₹400

Total = ₹2400

Each person's share = ₹800

Balances

A = +₹400
B = ₹0
C = -₹400
```

Result:

```
C → A : ₹400
```

For larger groups:

```
A = +600
B = -200
C = -150
D = -250
```

Transactions:

```
D → A ₹250
B → A ₹200
C → A ₹150
```

The greedy algorithm ensures the minimum number of transactions.

---

## 🚀 Technologies Used

- C Programming
- Data Structures
- File Handling
- Modular Programming

---

## 🖥️ Compilation

Using GCC:

```bash
gcc main.c expense.c group.c cashflow.c heap.c report.c -o CashFlowMinimizer
```

Run:

```bash
./CashFlowMinimizer
```

---

## 📋 Menu

```
========== MENU ==========
1. Add Expense
2. View Expenses
3. Search Expense
4. Delete Expense
5. Update Expense
6. Create Group
7. Add Member
8. Split Expense
9. Cash Flow Minimizer
10. Reports
11. Save Data
12. Exit
```

---

## 👨‍💻 Team Responsibilities

### Member 1 – Expense Tracker
- Expense CRUD
- Linked List implementation
- File handling

### Member 2 – User & Group Management
- User management
- Group creation
- Expense splitting

### Member 3 – Cash Flow Minimizer
- Net balance calculation
- Greedy algorithm
- Heap / Priority Queue

### Member 4 – Reports & Integration
- Reports
- Sorting & Searching
- Menu
- Integration & Testing

---

## 📈 Time Complexity

| Operation | Complexity |
|------------|------------|
| Add Expense | O(1) |
| Search Expense | O(n) |
| Delete Expense | O(n) |
| Build Balances | O(n) |
| Heap Construction | O(n) |
| Cash Flow Minimization | O(n log n) |

---

## 🎯 Learning Outcomes

- Practical implementation of DSA concepts
- Modular programming in C
- File handling
- Real-world problem solving
- Algorithm optimisation
- Team collaboration using Git & GitHub

---

## 🔮 Future Improvements

- Login authentication
- Database integration
- GUI version
- Receipt generation
- Export reports as CSV
- Charts and analytics
- Mobile/Web version

---

## 📚 Course

**Project-Based Learning (PBL)**

**Subject:** Data Structures & Algorithms

**Language:** C

---

## ⭐ Acknowledgements

Developed as a Data Structures & Algorithms PBL project to demonstrate the application of fundamental data structures and algorithms in solving real-world expense management and payment settlement problems.

---

If you find this project useful, consider giving it a ⭐ on GitHub!
