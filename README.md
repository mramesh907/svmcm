### README: Student Information Management System

---

#### Overview:
This C++ program is a simple Student Information Management System that allows users to input and display student details, semester-wise marks, and scholarship information. It demonstrates basic object-oriented programming concepts such as inheritance and encapsulation.

---

#### Usage:
1. **Compile the Code:** Use a C++ compiler (e.g., g++) to compile the code.
   ```
   g++ main.cpp -o student_info
   ```

2. **Run the Executable:** Execute the compiled binary.
   ```
   ./student_info
   ```

3. **Input Student Information:** Follow the prompts to input student details, semester-wise marks, and scholarship information.

4. **View Student Information:** Once the input is provided, the program will display the collected information.

---

#### Code Structure:
- **Classes:**
  1. `student`: Represents a basic student with attributes such as roll number, ID, registration number, and name.
  2. `sem1` and `sem2`: Inherit from `student` and represent semester-wise marks for the first and second semesters, respectively.
  3. `scholarship`: Represents scholarship information, including name and amount.
  4. `allinfo`: Inherits from `sem2` and `scholarship`, aggregates all information, and provides functions to input and display all data.

- **Main Function:**
  - Creates an object of the `allinfo` class, inputs student information, and displays all collected data.

---

#### Limitations and Improvements:
- Limited error handling: The program assumes valid input from the user and lacks robust error handling mechanisms.
- Fixed size for character arrays: The program uses fixed-size character arrays for names, which may lead to buffer overflow if longer names are provided.

---

#### Contribution:
Contributions to improve error handling, add features, or enhance performance are welcome. Please feel free to fork the repository, make your changes, and submit a pull request.

---

#### License:
This program is licensed under the MIT License. See the LICENSE file for details.

---

#### Author:
This program was created by [Ramesh Maity]. You can contact the author at [maityramesh907@email.com].

---
