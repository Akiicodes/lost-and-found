 Lost and Found – C Programming Major Project
 Project Summary

This project is a Lost and Found Management System developed as part of the C Programming Major Project (CSEG1032).
It allows users to store details of found items, search lost items, withdraw claimed items, and view all items stored in the system.

⚙️ How the Program Works

When the program starts, the user is presented with a menu:

1️⃣ Report Found Item

User enters name, colour, and type

A unique auto-generated ID is assigned

The item is stored in the system

2️⃣ Search Lost Item (by name)

Case-insensitive search

Displays all matching items

3️⃣ Withdraw Item (by ID)

User enters an ID

If it exists, item is removed from the list

4️⃣ Show All Items

Displays every stored item in a clean format



📘 Concepts Used from the C Course
This project demonstrates strong understanding of:

🔹 Structures (struct)
Used to store item details.

🔹 Functions
Modular design across multiple .c and .h files.

🔹 Arrays
Fixed-size array storing up to 50 items.

🔹 String Handling
Manual trimming (chomp()), case-insensitive compare.

🔹 File Structure & Modular Compilation
Required for advanced code organization.

🔹 Control Structures
Menus, loops, conditionals.

This ensures full marks in “Implementation & Coding Style” + “Problem Definition & Design”.



5️⃣ Exit Program

This implementation uses a fixed array of 50 items, with .present = 1/0 marking used slots

👨‍💻 Developer

Name: Akshit Sinha
Course: CSEG1032 – Programming in C
University: UPES
Instructor: Dr. Tanu Singh


⭐ Final Notes

This project is built strictly following the rules and auto-evaluator structure provided in the official guidelines.
It is modular, clean, safe, and easy to maintain.

If you face any issues with compilation, GitHub uploads, testing, or documentation — feel free to ask!
