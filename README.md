# Password Checker
This is a simple C program to validate a user-entered password with up to three attempts.

## Features
- **Password Validation:** Validates the entered password against a stored password.
- **Attempt Limit:** Allows up to three attempts before locking out further tries.
- **User Feedback:** Provides feedback on each attempt, including remaining attempts.

## How to use

1. **Compilation**
- Compile the program using a C compiler. For example, using GCC:
```console
gcc -o password_checker base.c
```
2. **Execution**
- Run the compiled executable:
```console
./password_checker
```
3. **Password Entry**
- Enter your password when prompted. You will have up to three attempts to correctly enter the password.
4. **Outcome**
- If the password is correct, the program will confirm it.
- If the password is incorrect, it will inform you and indicate how many attempts are remaining.
- After three incorrect attempts, the program will lock further attempts for some time.

## Notes
- **Security:** This program is for educational purposes and should not be used for sensitive applications without further hardening (e.g., secure password hashing, stronger input validation).
