# Library Management System (C++)

A simple console-based Library Management System written in C++.  
Allows a manager to add, update, or delete books in three categories (Science, History, Math) and lets customers register, borrow, or return books.

## 📋 Table of Contents

1. [Features](#features)  
2. [Project Structure](#project-structure)  
3. [Prerequisites](#prerequisites)  
4. [Building & Running](#building--running)  
5. [Usage](#usage)  
   - [Manager Mode](#manager-mode)  
   - [Customer Mode](#customer-mode)  
6. [Data Storage](#data-storage)  
7. [Future Improvements](#future-improvements)  
8. [Contributing](#contributing)  

---

## ✨ Features

- **Manager Interface**  
  - Secure login (password: `1234`)  
  - Add new books to Science, History, or Math  
  - Update existing book titles  
  - Delete books from any category

- **Customer Interface**  
  - Choose to borrow or return  
  - Registration (type: Student or Staff, name, telephone)  
  - Automatically calculates a 14-day return due date  
  - Record borrower details (name, address, book)

- **Clean Console UI**  
  - ANSI escape codes for screen clearing  
  - Input validation loops ensure correct menu choices  

---

## 🗂 Project Structure

- **`main()`**  
  - Entry point: sets console color, displays initial menu  
  - Calls `main_page()`, then either `manager_interface()` or `user_interface()`, followed by `logout_interface()`

- **`main_page()`**  
  - Prompts for role (manager or customer)  
  - For manager: asks for password  
  - For customer: collects registration data

- **`manager_interface()`**  
  - Handles add/update/delete operations on three `vector<string>` categories:
    - `science_books`
    - `history_books`
    - `math_books`

- **`user_interface()`**  
  - Handles borrowing/returning books from the three categories  
  - Collects borrower details and displays confirmation

- **`logout_interface()`**  
  - Simple “press 1 to exit” confirmation

---

## 🛠 Prerequisites

- A C++ compiler supporting C++11 or later  
- (Optional) Terminal/console with ANSI escape code support for screen clearing  

---

## ⚙️ Building & Running

1. **Clone or download** the repository.  
2. **Navigate** to the project directory in your terminal.  
3. **Compile**:
   
   ```bash
   g++ -std=c++11 -o library_app main.cpp
```

*(or use your preferred compiler: `clang++`, MSVC, etc.)*
4\. **Run**:

```bash
./library_app
```

## 🎮 Usage

### Manager Mode

1. At the “Welcome to library” prompt, enter `1` for Manager.
2. Enter password `1234`.
3. Choose an operation:

   * `1` → **Add a book**
   * `2` → **Update a book**
   * `3` → **Delete a book**
4. Select a category (1=Science, 2=History, 3=Math), then follow on-screen prompts.

### Customer Mode

1. At the “Welcome to library” prompt, enter `2` for Customer.
2. Register by entering:

   * Type (`student` or `staff`)
   * Name
   * Telephone
3. Choose:

   * `1` → **Borrow** (select category and book index)
   * `2` → **Return** (enter your name, book name, author)
4. For borrowing, you can continue or exit after seeing the 14-day due date.

---

## 💾 Data Storage

* Books are stored in three in-memory `vector<string>` lists:

  * `science_books`
  * `history_books`
  * `math_books`
* No file or database persistence; data resets on each run.

---

## 🚀 Future Improvements

* **Persistent Storage**: save/load catalog and transactions to a file or database.
* **Enhanced Validation**: prevent duplicate titles; validate telephone format.
* **User Accounts**: store multiple customers with borrowing history.
* **Search & Listing**: allow listing all books or searching by title/category.
* **GUI Front-End**: migrate console UI to a graphical toolkit (e.g., Qt).

---

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/YourFeature`)
3. Commit your changes (`git commit -m "Add awesome feature"`)
4. Push to your branch (`git push origin feature/YourFeature`)
5. Open a Pull Request

---
