# login_Cpp

My First C++ project.
In this project, you can choose to log in, register, or exit.
This project mainly is an application on how to work with files in C++ using ifstream and ofstream.

![console screenshot](./img.png)

And this is the program life circle in flow chart:

```mermaid
graph LR
A[chose r,l or e] -- l, for login --> B[comparing enterd data with stord date]
B--User name and password are correct-->s[succed]
B--User name and password are incorrect-->w[Try again]
w-->A
A --R,For register--> R(enter data,and create txt file to store them)
R-->A
s-->F
F[Termenated]
A--e,for exit-->F
